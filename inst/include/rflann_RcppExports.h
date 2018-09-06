// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_rflann_RCPPEXPORTS_H_GEN_
#define RCPP_rflann_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace rflann {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("rflann", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("rflann", "_rflann_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in rflann");
            }
        }
    }

    inline arma::imat FastKDNeighbour(Rcpp::NumericMatrix query, Rcpp::NumericMatrix ref, const std::size_t& k) {
        typedef SEXP(*Ptr_FastKDNeighbour)(SEXP,SEXP,SEXP);
        static Ptr_FastKDNeighbour p_FastKDNeighbour = NULL;
        if (p_FastKDNeighbour == NULL) {
            validateSignature("arma::imat(*FastKDNeighbour)(Rcpp::NumericMatrix,Rcpp::NumericMatrix,const std::size_t&)");
            p_FastKDNeighbour = (Ptr_FastKDNeighbour)R_GetCCallable("rflann", "_rflann_FastKDNeighbour");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_FastKDNeighbour(Shield<SEXP>(Rcpp::wrap(query)), Shield<SEXP>(Rcpp::wrap(ref)), Shield<SEXP>(Rcpp::wrap(k)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::imat >(rcpp_result_gen);
    }

}

#endif // RCPP_rflann_RCPPEXPORTS_H_GEN_