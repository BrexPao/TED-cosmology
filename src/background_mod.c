
// 1. Definição da densidade de energia escura com decaimento exponencial
// rho_de = rho_de_0 * exp(alpha * (1 - a))
double alpha = pba->alpha_ted;
double a = pba->a;
double rho_de = pba->rho_lambda * exp(alpha * (1.0 - a));

// 2. Cálculo da derivada para a conservação de energia (w efetivo)
// w_eff = -1 + (alpha * a) / 3
double w_ted = -1.0 + (alpha * a) / 3.0;

// 3. Modificação da Equação de Friedmann
// H^2 = (8*pi*G/3) * (rho_m + rho_r + rho_ted)
H = sqrt(8.0 * PI * G / 3.0 * (rho_m + rho_r + rho_de));
