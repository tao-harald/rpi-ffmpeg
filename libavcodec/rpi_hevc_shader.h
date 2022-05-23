#ifndef rpi_hevc_shader_H
#define rpi_hevc_shader_H

extern unsigned int ff_hevc_rpi_shader[];

#define mc_setup_c_q0 (ff_hevc_rpi_shader + 0)
#define mc_start (ff_hevc_rpi_shader + 0)
#define mc_setup_c_qn (ff_hevc_rpi_shader + 2)
#define mc_filter_c_p (ff_hevc_rpi_shader + 134)
#define mc_filter_c_p_l1 (ff_hevc_rpi_shader + 260)
#define mc_filter_c_b (ff_hevc_rpi_shader + 386)
#define mc_sync_q0 (ff_hevc_rpi_shader + 580)
#define mc_sync_q1 (ff_hevc_rpi_shader + 598)
#define mc_sync_q2 (ff_hevc_rpi_shader + 610)
#define mc_sync_q3 (ff_hevc_rpi_shader + 622)
#define mc_sync_q4 (ff_hevc_rpi_shader + 634)
#define mc_sync_q5 (ff_hevc_rpi_shader + 652)
#define mc_sync_q6 (ff_hevc_rpi_shader + 664)
#define mc_sync_q7 (ff_hevc_rpi_shader + 676)
#define mc_sync_q8 (ff_hevc_rpi_shader + 688)
#define mc_sync_q9 (ff_hevc_rpi_shader + 706)
#define mc_sync_q10 (ff_hevc_rpi_shader + 718)
#define mc_sync_q11 (ff_hevc_rpi_shader + 730)
#define mc_exit_c_qn (ff_hevc_rpi_shader + 742)
#define mc_exit_y_qn (ff_hevc_rpi_shader + 742)
#define mc_exit_c_q0 (ff_hevc_rpi_shader + 760)
#define mc_exit_y_q0 (ff_hevc_rpi_shader + 760)
#define mc_setup_y_q0 (ff_hevc_rpi_shader + 780)
#define mc_setup_y_qn (ff_hevc_rpi_shader + 782)
#define mc_filter_y_pxx (ff_hevc_rpi_shader + 1014)
#define mc_filter_y_bxx (ff_hevc_rpi_shader + 1140)
#define mc_filter_y_p00 (ff_hevc_rpi_shader + 1272)
#define mc_filter_y_b00 (ff_hevc_rpi_shader + 1358)
#define mc_setup_c10_q0 (ff_hevc_rpi_shader + 1432)
#define mc_setup_c10_qn (ff_hevc_rpi_shader + 1434)
#define mc_filter_c10_p (ff_hevc_rpi_shader + 1562)
#define mc_filter_c10_p_l1 (ff_hevc_rpi_shader + 1684)
#define mc_filter_c10_b (ff_hevc_rpi_shader + 1806)
#define mc_sync10_q0 (ff_hevc_rpi_shader + 1996)
#define mc_sync10_q1 (ff_hevc_rpi_shader + 2014)
#define mc_sync10_q2 (ff_hevc_rpi_shader + 2026)
#define mc_sync10_q3 (ff_hevc_rpi_shader + 2038)
#define mc_sync10_q4 (ff_hevc_rpi_shader + 2050)
#define mc_sync10_q5 (ff_hevc_rpi_shader + 2068)
#define mc_sync10_q6 (ff_hevc_rpi_shader + 2080)
#define mc_sync10_q7 (ff_hevc_rpi_shader + 2092)
#define mc_sync10_q8 (ff_hevc_rpi_shader + 2104)
#define mc_sync10_q9 (ff_hevc_rpi_shader + 2122)
#define mc_sync10_q10 (ff_hevc_rpi_shader + 2134)
#define mc_sync10_q11 (ff_hevc_rpi_shader + 2146)
#define mc_exit_c10_q0 (ff_hevc_rpi_shader + 2158)
#define mc_exit_y10_q0 (ff_hevc_rpi_shader + 2158)
#define mc_exit_c10_qn (ff_hevc_rpi_shader + 2178)
#define mc_exit_y10_qn (ff_hevc_rpi_shader + 2178)
#define mc_setup_y10_q0 (ff_hevc_rpi_shader + 2196)
#define mc_setup_y10_qn (ff_hevc_rpi_shader + 2198)
#define mc_filter_y10_pxx (ff_hevc_rpi_shader + 2440)
#define mc_filter_y10_p00 (ff_hevc_rpi_shader + 2566)
#define mc_filter_y10_bxx (ff_hevc_rpi_shader + 2654)
#define mc_filter_y10_b00 (ff_hevc_rpi_shader + 2786)
#define mc_end (ff_hevc_rpi_shader + 2860)

#endif