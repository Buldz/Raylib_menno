#ifndef TIMER_H
#define TIMER_H

#include "assert.h"
#include "raylib.h"
#include "entity.h"

/// @class Timer
/// @brief A class for measuring time intervals.
class Timer : public Entity
{
public:
  /// @brief Default constructor.
  Timer();

  /// @brief Destructor.
  ~Timer();

  /// @brief Starts the timer.
  void start();

  /// @brief Stops the timer.
  void stop();

  /// @brief Gets the elapsed time in seconds.
  /// @return The elapsed time in seconds.
  double getSeconds();

  /// @brief Restarts the timer.
  void restart() { start(); };

private:
  double _startTime;   ///< The start time of the timer.
  double _pausedTicks; ///< The paused ticks of the timer.
  bool _started;       ///< Flag indicating if the timer has started.
  bool _paused;        ///< Flag indicating if the timer is paused.
};

#endif