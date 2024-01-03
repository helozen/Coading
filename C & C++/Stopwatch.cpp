#include <iostream>
#include <chrono>
#include <thread>

using namespace std; // Using the std namespace

class Stopwatch
{
private:
    bool running;
    chrono::steady_clock::time_point startTime;
    chrono::duration<double> elapsedTime;

public:
    Stopwatch() : running(false), elapsedTime(0) {}

    void start()
    {
        if (!running)
        {
            running = true;
            startTime = chrono::steady_clock::now();
        }
    }

    void stop()
    {
        if (running)
        {
            running = false;
            elapsedTime += chrono::steady_clock::now() - startTime;
        }
    }

    void reset()
    {
        elapsedTime = chrono::duration<double>(0);
        running = false;
    }

    double getTime() const
    {
        return elapsedTime.count();
    }

    bool isRunning() const
    {
        return running;
    }
};

int main()
{
    Stopwatch stopwatch;

    while (true)
    {
        system("clear"); // Clear console screen (Linux/macOS)
        // system("cls"); // Clear console screen (Windows)

        cout << "Stopwatch Application" << endl;
        cout << "---------------------" << endl;
        cout << "Press 's' to start, 'p' to pause, 'r' to reset, 'q' to quit." << endl;

        if (stopwatch.isRunning())
        {
            cout << "Elapsed Time: " << stopwatch.getTime() << " seconds" << endl;
        }

        char input;
        cin >> input;

        switch (input)
        {
        case 's':
            stopwatch.start();
            break;
        case 'p':
            stopwatch.stop();
            break;
        case 'r':
            stopwatch.reset();
            break;
        case 'q':
            return 0;
        default:
            break;
        }

        this_thread::sleep_for(chrono::milliseconds(100)); // Pause for a short duration to avoid excessive updates
    }

    return 0;
}
