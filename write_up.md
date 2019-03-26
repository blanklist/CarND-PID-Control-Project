# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Reflections

Describe the effect each of the P, I, D components had in your implementation.

P for proportional attempts to correct the vehicle steering angle towards the center of the lane and against the cross track error. If too over-emphasized, the vehicle will overshoot the center land and drive off course. I for integral tries to work against biases in the controls system that would prevent correction of the cross track error. D for differential works against the proportional parameter in an attempt to prevent the overshooting of the center of the lane. The differential paramter smooths the approach to the center lane.

When combined, the P, I, and D parameters maintain positon along the track at a constant velocity.


Describe how the final hyperparameters were chosen.

Hyperparameters were chosen by a lot of trial and error. There are commented lines in the code (main.cpp lines 37-45) from which I tested each parameter on its own to see the effect on the vehicle. The I parameter is near enough to zero to likely have little effect on the vehicle in this simulation. The main adjustments were between the P and D parameters. Continual experimentation would find the car at two extremes. P parameter would be too high with D too low and the car would swerve, drawing "s" curves to the left and right. Or D parameter would be too high with P too low and the vehicle would not react well in curves and go off track. I made attempts to increase the constant velocity parameter but, found little benefit and rolled back to 0.3 - or ~30mph - as a compromise.