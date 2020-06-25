// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// anti_transformation
NumericVector anti_transformation(NumericVector x, NumericVector lb, NumericVector ub);
RcppExport SEXP _RMPSH_anti_transformation(SEXP xSEXP, SEXP lbSEXP, SEXP ubSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lb(lbSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ub(ubSEXP);
    rcpp_result_gen = Rcpp::wrap(anti_transformation(x, lb, ub));
    return rcpp_result_gen;
END_RCPP
}
// transformation
NumericVector transformation(NumericVector x, NumericVector lb, NumericVector ub);
RcppExport SEXP _RMPSH_transformation(SEXP xSEXP, SEXP lbSEXP, SEXP ubSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lb(lbSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ub(ubSEXP);
    rcpp_result_gen = Rcpp::wrap(transformation(x, lb, ub));
    return rcpp_result_gen;
END_RCPP
}
// update
NumericVector update(NumericVector x, double epsilon, double rho, double phi);
RcppExport SEXP _RMPSH_update(SEXP xSEXP, SEXP epsilonSEXP, SEXP rhoSEXP, SEXP phiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type phi(phiSEXP);
    rcpp_result_gen = Rcpp::wrap(update(x, epsilon, rho, phi));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RMPSH_anti_transformation", (DL_FUNC) &_RMPSH_anti_transformation, 3},
    {"_RMPSH_transformation", (DL_FUNC) &_RMPSH_transformation, 3},
    {"_RMPSH_update", (DL_FUNC) &_RMPSH_update, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_RMPSH(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
