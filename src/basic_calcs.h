#ifndef ANTOK_BASIC_CALCS_H
#define ANTOK_BASIC_CALCS_H

class TLorentzVector;
class TVector3;

namespace antok {

	TLorentzVector get_beam_energy(TVector3 p3_beam, const TLorentzVector& LV_X);

	void get_RPD_delta_phi_res(const TLorentzVector& pBeam,
							   const TLorentzVector& pProton,
							   const TLorentzVector& pX,
							   double& delta_phi, double& res);

	void get_RPD_delta_phi_res_fhaas(const TLorentzVector& pBeam,
							         const TLorentzVector& pProton,
							         const TLorentzVector& pX,
							         double& delta_phi, double& res);

}

#endif
