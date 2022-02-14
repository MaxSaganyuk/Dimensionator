#include <iostream>

int************************************************** create_arr(int *sizes){
	int************************************************** arr;

	arr = new int*************************************************[sizes[0]];

	for(int iter_0 = 0; iter_0 < sizes[0]; ++iter_0){
		arr[iter_0] = new int************************************************[sizes[1]];
		for(int iter_1 = 0; iter_1 < sizes[1]; ++iter_1){
			arr[iter_0][iter_1] = new int***********************************************[sizes[2]];
			for(int iter_2 = 0; iter_2 < sizes[2]; ++iter_2){
				arr[iter_0][iter_1][iter_2] = new int**********************************************[sizes[3]];
				for(int iter_3 = 0; iter_3 < sizes[3]; ++iter_3){
					arr[iter_0][iter_1][iter_2][iter_3] = new int*********************************************[sizes[4]];
					for(int iter_4 = 0; iter_4 < sizes[4]; ++iter_4){
						arr[iter_0][iter_1][iter_2][iter_3][iter_4] = new int********************************************[sizes[5]];
						for(int iter_5 = 0; iter_5 < sizes[5]; ++iter_5){
							arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5] = new int*******************************************[sizes[6]];
							for(int iter_6 = 0; iter_6 < sizes[6]; ++iter_6){
								arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6] = new int******************************************[sizes[7]];
								for(int iter_7 = 0; iter_7 < sizes[7]; ++iter_7){
									arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7] = new int*****************************************[sizes[8]];
									for(int iter_8 = 0; iter_8 < sizes[8]; ++iter_8){
										arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8] = new int****************************************[sizes[9]];
										for(int iter_9 = 0; iter_9 < sizes[9]; ++iter_9){
											arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9] = new int***************************************[sizes[10]];
											for(int iter_10 = 0; iter_10 < sizes[10]; ++iter_10){
												arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10] = new int**************************************[sizes[11]];
												for(int iter_11 = 0; iter_11 < sizes[11]; ++iter_11){
													arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11] = new int*************************************[sizes[12]];
													for(int iter_12 = 0; iter_12 < sizes[12]; ++iter_12){
														arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12] = new int************************************[sizes[13]];
														for(int iter_13 = 0; iter_13 < sizes[13]; ++iter_13){
															arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13] = new int***********************************[sizes[14]];
															for(int iter_14 = 0; iter_14 < sizes[14]; ++iter_14){
																arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14] = new int**********************************[sizes[15]];
																for(int iter_15 = 0; iter_15 < sizes[15]; ++iter_15){
																	arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15] = new int*********************************[sizes[16]];
																	for(int iter_16 = 0; iter_16 < sizes[16]; ++iter_16){
																		arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16] = new int********************************[sizes[17]];
																		for(int iter_17 = 0; iter_17 < sizes[17]; ++iter_17){
																			arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17] = new int*******************************[sizes[18]];
																			for(int iter_18 = 0; iter_18 < sizes[18]; ++iter_18){
																				arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18] = new int******************************[sizes[19]];
																				for(int iter_19 = 0; iter_19 < sizes[19]; ++iter_19){
																					arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19] = new int*****************************[sizes[20]];
																					for(int iter_20 = 0; iter_20 < sizes[20]; ++iter_20){
																						arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20] = new int****************************[sizes[21]];
																						for(int iter_21 = 0; iter_21 < sizes[21]; ++iter_21){
																							arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21] = new int***************************[sizes[22]];
																							for(int iter_22 = 0; iter_22 < sizes[22]; ++iter_22){
																								arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22] = new int**************************[sizes[23]];
																								for(int iter_23 = 0; iter_23 < sizes[23]; ++iter_23){
																									arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23] = new int*************************[sizes[24]];
																									for(int iter_24 = 0; iter_24 < sizes[24]; ++iter_24){
																										arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24] = new int************************[sizes[25]];
																										for(int iter_25 = 0; iter_25 < sizes[25]; ++iter_25){
																											arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25] = new int***********************[sizes[26]];
																											for(int iter_26 = 0; iter_26 < sizes[26]; ++iter_26){
																												arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26] = new int**********************[sizes[27]];
																												for(int iter_27 = 0; iter_27 < sizes[27]; ++iter_27){
																													arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27] = new int*********************[sizes[28]];
																													for(int iter_28 = 0; iter_28 < sizes[28]; ++iter_28){
																														arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28] = new int********************[sizes[29]];
																														for(int iter_29 = 0; iter_29 < sizes[29]; ++iter_29){
																															arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29] = new int*******************[sizes[30]];
																															for(int iter_30 = 0; iter_30 < sizes[30]; ++iter_30){
																																arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30] = new int******************[sizes[31]];
																																for(int iter_31 = 0; iter_31 < sizes[31]; ++iter_31){
																																	arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31] = new int*****************[sizes[32]];
																																	for(int iter_32 = 0; iter_32 < sizes[32]; ++iter_32){
																																		arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32] = new int****************[sizes[33]];
																																		for(int iter_33 = 0; iter_33 < sizes[33]; ++iter_33){
																																			arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33] = new int***************[sizes[34]];
																																			for(int iter_34 = 0; iter_34 < sizes[34]; ++iter_34){
																																				arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34] = new int**************[sizes[35]];
																																				for(int iter_35 = 0; iter_35 < sizes[35]; ++iter_35){
																																					arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35] = new int*************[sizes[36]];
																																					for(int iter_36 = 0; iter_36 < sizes[36]; ++iter_36){
																																						arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36] = new int************[sizes[37]];
																																						for(int iter_37 = 0; iter_37 < sizes[37]; ++iter_37){
																																							arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37] = new int***********[sizes[38]];
																																							for(int iter_38 = 0; iter_38 < sizes[38]; ++iter_38){
																																								arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38] = new int**********[sizes[39]];
																																								for(int iter_39 = 0; iter_39 < sizes[39]; ++iter_39){
																																									arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39] = new int*********[sizes[40]];
																																									for(int iter_40 = 0; iter_40 < sizes[40]; ++iter_40){
																																										arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40] = new int********[sizes[41]];
																																										for(int iter_41 = 0; iter_41 < sizes[41]; ++iter_41){
																																											arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41] = new int*******[sizes[42]];
																																											for(int iter_42 = 0; iter_42 < sizes[42]; ++iter_42){
																																												arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42] = new int******[sizes[43]];
																																												for(int iter_43 = 0; iter_43 < sizes[43]; ++iter_43){
																																													arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43] = new int*****[sizes[44]];
																																													for(int iter_44 = 0; iter_44 < sizes[44]; ++iter_44){
																																														arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44] = new int****[sizes[45]];
																																														for(int iter_45 = 0; iter_45 < sizes[45]; ++iter_45){
																																															arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44][iter_45] = new int***[sizes[46]];
																																															for(int iter_46 = 0; iter_46 < sizes[46]; ++iter_46){
																																																arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44][iter_45][iter_46] = new int**[sizes[47]];
																																																for(int iter_47 = 0; iter_47 < sizes[47]; ++iter_47){
																																																	arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44][iter_45][iter_46][iter_47] = new int*[sizes[48]];
																																																	for(int iter_48 = 0; iter_48 < sizes[48]; ++iter_48){
																																																		arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44][iter_45][iter_46][iter_47][iter_48] = new int[sizes[49]];
																																																	}
																																																}
																																															}
																																														}
																																													}
																																												}
																																											}
																																										}
																																									}
																																								}
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return arr;
}

void delete_arr(int **************************************************arr, int *sizes){
	for(int iter_0 = 0; iter_0 < sizes[0]; ++iter_0){
		for(int iter_1 = 0; iter_1 < sizes[1]; ++iter_1){
			for(int iter_2 = 0; iter_2 < sizes[2]; ++iter_2){
				for(int iter_3 = 0; iter_3 < sizes[3]; ++iter_3){
					for(int iter_4 = 0; iter_4 < sizes[4]; ++iter_4){
						for(int iter_5 = 0; iter_5 < sizes[5]; ++iter_5){
							for(int iter_6 = 0; iter_6 < sizes[6]; ++iter_6){
								for(int iter_7 = 0; iter_7 < sizes[7]; ++iter_7){
									for(int iter_8 = 0; iter_8 < sizes[8]; ++iter_8){
										for(int iter_9 = 0; iter_9 < sizes[9]; ++iter_9){
											for(int iter_10 = 0; iter_10 < sizes[10]; ++iter_10){
												for(int iter_11 = 0; iter_11 < sizes[11]; ++iter_11){
													for(int iter_12 = 0; iter_12 < sizes[12]; ++iter_12){
														for(int iter_13 = 0; iter_13 < sizes[13]; ++iter_13){
															for(int iter_14 = 0; iter_14 < sizes[14]; ++iter_14){
																for(int iter_15 = 0; iter_15 < sizes[15]; ++iter_15){
																	for(int iter_16 = 0; iter_16 < sizes[16]; ++iter_16){
																		for(int iter_17 = 0; iter_17 < sizes[17]; ++iter_17){
																			for(int iter_18 = 0; iter_18 < sizes[18]; ++iter_18){
																				for(int iter_19 = 0; iter_19 < sizes[19]; ++iter_19){
																					for(int iter_20 = 0; iter_20 < sizes[20]; ++iter_20){
																						for(int iter_21 = 0; iter_21 < sizes[21]; ++iter_21){
																							for(int iter_22 = 0; iter_22 < sizes[22]; ++iter_22){
																								for(int iter_23 = 0; iter_23 < sizes[23]; ++iter_23){
																									for(int iter_24 = 0; iter_24 < sizes[24]; ++iter_24){
																										for(int iter_25 = 0; iter_25 < sizes[25]; ++iter_25){
																											for(int iter_26 = 0; iter_26 < sizes[26]; ++iter_26){
																												for(int iter_27 = 0; iter_27 < sizes[27]; ++iter_27){
																													for(int iter_28 = 0; iter_28 < sizes[28]; ++iter_28){
																														for(int iter_29 = 0; iter_29 < sizes[29]; ++iter_29){
																															for(int iter_30 = 0; iter_30 < sizes[30]; ++iter_30){
																																for(int iter_31 = 0; iter_31 < sizes[31]; ++iter_31){
																																	for(int iter_32 = 0; iter_32 < sizes[32]; ++iter_32){
																																		for(int iter_33 = 0; iter_33 < sizes[33]; ++iter_33){
																																			for(int iter_34 = 0; iter_34 < sizes[34]; ++iter_34){
																																				for(int iter_35 = 0; iter_35 < sizes[35]; ++iter_35){
																																					for(int iter_36 = 0; iter_36 < sizes[36]; ++iter_36){
																																						for(int iter_37 = 0; iter_37 < sizes[37]; ++iter_37){
																																							for(int iter_38 = 0; iter_38 < sizes[38]; ++iter_38){
																																								for(int iter_39 = 0; iter_39 < sizes[39]; ++iter_39){
																																									for(int iter_40 = 0; iter_40 < sizes[40]; ++iter_40){
																																										for(int iter_41 = 0; iter_41 < sizes[41]; ++iter_41){
																																											for(int iter_42 = 0; iter_42 < sizes[42]; ++iter_42){
																																												for(int iter_43 = 0; iter_43 < sizes[43]; ++iter_43){
																																													for(int iter_44 = 0; iter_44 < sizes[44]; ++iter_44){
																																														for(int iter_45 = 0; iter_45 < sizes[45]; ++iter_45){
																																															for(int iter_46 = 0; iter_46 < sizes[46]; ++iter_46){
																																																for(int iter_47 = 0; iter_47 < sizes[47]; ++iter_47){
																																																	for(int iter_48 = 0; iter_48 < sizes[48]; ++iter_48){
																																																		delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44][iter_45][iter_46][iter_47][iter_48];
																																																	}
																																																	delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44][iter_45][iter_46][iter_47];
																																																}
																																																delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44][iter_45][iter_46];
																																															}
																																															delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44][iter_45];
																																														}
																																														delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43][iter_44];
																																													}
																																													delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42][iter_43];
																																												}
																																												delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41][iter_42];
																																											}
																																											delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40][iter_41];
																																										}
																																										delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39][iter_40];
																																									}
																																									delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38][iter_39];
																																								}
																																								delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37][iter_38];
																																							}
																																							delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36][iter_37];
																																						}
																																						delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35][iter_36];
																																					}
																																					delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34][iter_35];
																																				}
																																				delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33][iter_34];
																																			}
																																			delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32][iter_33];
																																		}
																																		delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31][iter_32];
																																	}
																																	delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30][iter_31];
																																}
																																delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29][iter_30];
																															}
																															delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28][iter_29];
																														}
																														delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27][iter_28];
																													}
																													delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26][iter_27];
																												}
																												delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25][iter_26];
																											}
																											delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24][iter_25];
																										}
																										delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23][iter_24];
																									}
																									delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22][iter_23];
																								}
																								delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21][iter_22];
																							}
																							delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20][iter_21];
																						}
																						delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19][iter_20];
																					}
																					delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18][iter_19];
																				}
																				delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17][iter_18];
																			}
																			delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16][iter_17];
																		}
																		delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15][iter_16];
																	}
																	delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14][iter_15];
																}
																delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13][iter_14];
															}
															delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12][iter_13];
														}
														delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11][iter_12];
													}
													delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10][iter_11];
												}
												delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9][iter_10];
											}
											delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8][iter_9];
										}
										delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7][iter_8];
									}
									delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6][iter_7];
								}
								delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5][iter_6];
							}
							delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4][iter_5];
						}
						delete[] arr[iter_0][iter_1][iter_2][iter_3][iter_4];
					}
					delete[] arr[iter_0][iter_1][iter_2][iter_3];
				}
				delete[] arr[iter_0][iter_1][iter_2];
			}
			delete[] arr[iter_0][iter_1];
		}
		delete[] arr[iter_0];
	}
	delete[] arr;
}

int main(){
	int* sizes = new int[50];

	sizes[0] = 5;
	sizes[1] = 5;
	sizes[2] = 5;
	sizes[3] = 5;
	sizes[4] = 5;
	sizes[5] = 5;
	sizes[6] = 5;
	sizes[7] = 5;
	sizes[8] = 5;
	sizes[9] = 5;
	sizes[10] = 5;
	sizes[11] = 5;
	sizes[12] = 5;
	sizes[13] = 5;
	sizes[14] = 5;
	sizes[15] = 5;
	sizes[16] = 5;
	sizes[17] = 5;
	sizes[18] = 5;
	sizes[19] = 5;
	sizes[20] = 5;
	sizes[21] = 5;
	sizes[22] = 5;
	sizes[23] = 5;
	sizes[24] = 5;
	sizes[25] = 5;
	sizes[26] = 5;
	sizes[27] = 5;
	sizes[28] = 5;
	sizes[29] = 5;
	sizes[30] = 5;
	sizes[31] = 5;
	sizes[32] = 5;
	sizes[33] = 5;
	sizes[34] = 5;
	sizes[35] = 5;
	sizes[36] = 5;
	sizes[37] = 5;
	sizes[38] = 5;
	sizes[39] = 5;
	sizes[40] = 5;
	sizes[41] = 5;
	sizes[42] = 5;
	sizes[43] = 5;
	sizes[44] = 5;
	sizes[45] = 5;
	sizes[46] = 5;
	sizes[47] = 5;
	sizes[48] = 5;
	sizes[49] = 5;

	int************************************************** arr = create_arr(sizes);
	arr[1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1] = 69;
	std::cout << arr[1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1][1] << std::endl;

}
