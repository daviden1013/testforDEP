// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Tn
double Tn(NumericVector& x, NumericVector& y);
RcppExport SEXP testforDEP_Tn(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(Tn(x, y));
    return rcpp_result_gen;
END_RCPP
}
// MC_EL_count
int MC_EL_count(double tn, int n, int sn);
RcppExport SEXP testforDEP_MC_EL_count(SEXP tnSEXP, SEXP nSEXP, SEXP snSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tn(tnSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type sn(snSEXP);
    rcpp_result_gen = Rcpp::wrap(MC_EL_count(tn, n, sn));
    return rcpp_result_gen;
END_RCPP
}
// randEl
NumericVector randEl(int& n, int& sn);
RcppExport SEXP testforDEP_randEl(SEXP nSEXP, SEXP snSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< int& >::type sn(snSEXP);
    rcpp_result_gen = Rcpp::wrap(randEl(n, sn));
    return rcpp_result_gen;
END_RCPP
}
// emcdf_output
NumericMatrix emcdf_output(NumericVector& x, NumericVector& y, bool is_tie);
RcppExport SEXP testforDEP_emcdf_output(SEXP xSEXP, SEXP ySEXP, SEXP is_tieSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type is_tie(is_tieSEXP);
    rcpp_result_gen = Rcpp::wrap(emcdf_output(x, y, is_tie));
    return rcpp_result_gen;
END_RCPP
}
// SortByX
NumericMatrix SortByX(NumericVector& x, NumericVector& y);
RcppExport SEXP testforDEP_SortByX(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(SortByX(x, y));
    return rcpp_result_gen;
END_RCPP
}
// vex
double vex(NumericVector& x, NumericVector& y);
RcppExport SEXP testforDEP_vex(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(vex(x, y));
    return rcpp_result_gen;
END_RCPP
}
// MC_count
int MC_count(double Ts, int n, int sn);
RcppExport SEXP testforDEP_MC_count(SEXP TsSEXP, SEXP nSEXP, SEXP snSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type Ts(TsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type sn(snSEXP);
    rcpp_result_gen = Rcpp::wrap(MC_count(Ts, n, sn));
    return rcpp_result_gen;
END_RCPP
}
// randTs
NumericVector randTs(int& n, int& sn);
RcppExport SEXP testforDEP_randTs(SEXP nSEXP, SEXP snSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< int& >::type sn(snSEXP);
    rcpp_result_gen = Rcpp::wrap(randTs(n, sn));
    return rcpp_result_gen;
END_RCPP
}
