// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Center_and_scale
void Center_and_scale(arma::mat& X, const int& n, const int& p);
RcppExport SEXP _SLOPE_Center_and_scale(SEXP XSEXP, SEXP nSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int& >::type p(pSEXP);
    Center_and_scale(X, n, p);
    return R_NilValue;
END_RCPP
}
// SLOBE_ADMM_approx_missing
List SLOBE_ADMM_approx_missing(NumericVector start, arma::mat Xmis, NumericMatrix Xinit, arma::vec Y, double a_prior, double b_prior, arma::mat Covmat, double sigma, double FDR, double tol, bool known_sigma, int max_iter, bool verbose, bool BH, bool known_cov);
RcppExport SEXP _SLOPE_SLOBE_ADMM_approx_missing(SEXP startSEXP, SEXP XmisSEXP, SEXP XinitSEXP, SEXP YSEXP, SEXP a_priorSEXP, SEXP b_priorSEXP, SEXP CovmatSEXP, SEXP sigmaSEXP, SEXP FDRSEXP, SEXP tolSEXP, SEXP known_sigmaSEXP, SEXP max_iterSEXP, SEXP verboseSEXP, SEXP BHSEXP, SEXP known_covSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xmis(XmisSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xinit(XinitSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type a_prior(a_priorSEXP);
    Rcpp::traits::input_parameter< double >::type b_prior(b_priorSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Covmat(CovmatSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type FDR(FDRSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type known_sigma(known_sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type BH(BHSEXP);
    Rcpp::traits::input_parameter< bool >::type known_cov(known_covSEXP);
    rcpp_result_gen = Rcpp::wrap(SLOBE_ADMM_approx_missing(start, Xmis, Xinit, Y, a_prior, b_prior, Covmat, sigma, FDR, tol, known_sigma, max_iter, verbose, BH, known_cov));
    return rcpp_result_gen;
END_RCPP
}
// sparseSLOPE
Rcpp::List sparseSLOPE(arma::sp_mat x, arma::mat y, const Rcpp::List control);
RcppExport SEXP _SLOPE_sparseSLOPE(SEXP xSEXP, SEXP ySEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(sparseSLOPE(x, y, control));
    return rcpp_result_gen;
END_RCPP
}
// denseSLOPE
Rcpp::List denseSLOPE(arma::mat x, arma::mat y, const Rcpp::List control);
RcppExport SEXP _SLOPE_denseSLOPE(SEXP xSEXP, SEXP ySEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(denseSLOPE(x, y, control));
    return rcpp_result_gen;
END_RCPP
}
// sorted_l1_prox
arma::mat sorted_l1_prox(const arma::mat& x, const arma::vec& lambda);
RcppExport SEXP _SLOPE_sorted_l1_prox(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(sorted_l1_prox(x, lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SLOPE_Center_and_scale", (DL_FUNC) &_SLOPE_Center_and_scale, 3},
    {"_SLOPE_SLOBE_ADMM_approx_missing", (DL_FUNC) &_SLOPE_SLOBE_ADMM_approx_missing, 15},
    {"_SLOPE_sparseSLOPE", (DL_FUNC) &_SLOPE_sparseSLOPE, 3},
    {"_SLOPE_denseSLOPE", (DL_FUNC) &_SLOPE_denseSLOPE, 3},
    {"_SLOPE_sorted_l1_prox", (DL_FUNC) &_SLOPE_sorted_l1_prox, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_SLOPE(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
