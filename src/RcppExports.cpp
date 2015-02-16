// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// updatecoord_f
List updatecoord_f(arma::vec phi, double yy, arma::mat xx, arma::mat yx, double lambdaupcoord, double n2, arma::mat x, std::string status);
RcppExport SEXP fastfmrlasso_updatecoord_f(SEXP phiSEXP, SEXP yySEXP, SEXP xxSEXP, SEXP yxSEXP, SEXP lambdaupcoordSEXP, SEXP n2SEXP, SEXP xSEXP, SEXP statusSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::vec >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< double >::type yy(yySEXP );
        Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type yx(yxSEXP );
        Rcpp::traits::input_parameter< double >::type lambdaupcoord(lambdaupcoordSEXP );
        Rcpp::traits::input_parameter< double >::type n2(n2SEXP );
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type status(statusSEXP );
        List __result = updatecoord_f(phi, yy, xx, yx, lambdaupcoord, n2, x, status);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cnloglikprob_f
double cnloglikprob_f(arma::vec ncomp, arma::vec l1normphi, arma::vec prob, double lambda, double gamma);
RcppExport SEXP fastfmrlasso_cnloglikprob_f(SEXP ncompSEXP, SEXP l1normphiSEXP, SEXP probSEXP, SEXP lambdaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::vec >::type ncomp(ncompSEXP );
        Rcpp::traits::input_parameter< arma::vec >::type l1normphi(l1normphiSEXP );
        Rcpp::traits::input_parameter< arma::vec >::type prob(probSEXP );
        Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP );
        double __result = cnloglikprob_f(ncomp, l1normphi, prob, lambda, gamma);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fmrlasso_f
List fmrlasso_f(arma::mat x, arma::vec y, int k, double lambda, double ssdini, arma::mat exini, double gamma = 1, double term = 10e-6, int maxiter = 1000, int actiter = 10, bool warnings = true);
RcppExport SEXP fastfmrlasso_fmrlasso_f(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP ssdiniSEXP, SEXP exiniSEXP, SEXP gammaSEXP, SEXP termSEXP, SEXP maxiterSEXP, SEXP actiterSEXP, SEXP warningsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< double >::type ssdini(ssdiniSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type exini(exiniSEXP );
        Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP );
        Rcpp::traits::input_parameter< double >::type term(termSEXP );
        Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP );
        Rcpp::traits::input_parameter< int >::type actiter(actiterSEXP );
        Rcpp::traits::input_parameter< bool >::type warnings(warningsSEXP );
        List __result = fmrlasso_f(x, y, k, lambda, ssdini, exini, gamma, term, maxiter, actiter, warnings);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fmrlassopath_f
List fmrlassopath_f(arma::mat x, arma::vec y, int k, arma::vec lambda, double ssdini, arma::mat exini, double gamma = 1, double term = 10e-6, int maxiter = 1000, int actiter = 10);
RcppExport SEXP fastfmrlasso_fmrlassopath_f(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP ssdiniSEXP, SEXP exiniSEXP, SEXP gammaSEXP, SEXP termSEXP, SEXP maxiterSEXP, SEXP actiterSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< double >::type ssdini(ssdiniSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type exini(exiniSEXP );
        Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP );
        Rcpp::traits::input_parameter< double >::type term(termSEXP );
        Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP );
        Rcpp::traits::input_parameter< int >::type actiter(actiterSEXP );
        List __result = fmrlassopath_f(x, y, k, lambda, ssdini, exini, gamma, term, maxiter, actiter);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP fastfmrlasso_rcpp_hello_world() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        List __result = rcpp_hello_world();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
