#ifndef __stepper_motor_74hc_unl2x03_h__
#define __stepper_motor_74hc_unl2x03_h__

int stepm_74hc_init_motors(unsigned motor_count, unsigned gpio_a, unsigned gpio_b, unsigned gpio_c, unsigned gpio_data_in);

int stepm_74hc_init_pawls(unsigned motor, unsigned gpio_margin_A, unsigned gpio_margin_B);

int stepm_74hc_rotate(unsigned motor, int direction, unsigned steps_count);

int stepm_74hc_calibrate(unsigned motor);

int stepm_74hc_get_max_position(unsigned motor);
int stepm_74hc_get_cur_position(unsigned motor);

void stepm_74hc_done();


#endif // __stepper_motor_74hc_unl2x03_h__

