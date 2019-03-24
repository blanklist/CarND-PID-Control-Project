# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Reflections

Describe the effect each of the P, I, D components had in your implementation.

P for proportional attempts to correct the vehicle steering angle towards the center of the lane and against the cross track error. If too over-emphasized, the vehicle will overshoot the center land and drive off course. Here is an example of that parameter at XX

I for integral tries to work against biases in the controls system that would prevent correction of the cross track error. Here is an example of that paramter set to XX

D for differential works against the proportional parameter in an attempt to prevent the overshooting of the center of the lane. The differential paramter smooths the approach to the center lane. Here is an example of that parameter set to XX



Describe how the final hyperparameters were chosen.