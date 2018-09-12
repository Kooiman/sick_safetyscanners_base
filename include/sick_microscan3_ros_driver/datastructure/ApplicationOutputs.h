#pragma once

#include <sick_microscan3_ros_driver/datastructure/DataTypes.h>

namespace sick {
namespace datastructure {

class ApplicationOutputs
{
public:
  ApplicationOutputs();

  std::vector<bool> getEvalOutVector() const;
  void setEvalOutVector(const std::vector<bool> &eval_out_vector);

  std::vector<bool> getEvalOutIsSafeVector() const;
  void setEvalOutIsSafeVector(const std::vector<bool> &eval_out_is_safe_vector);

  std::vector<bool> getEvalOutIsValidVector() const;
  void setEvalOutIsValidVector(const std::vector<bool> &eval_out_is_valid_vector);

  std::vector<UINT16> getMonitoringCaseVector() const;
  void setMonitoringCaseVector(const std::vector<UINT16> &monitoring_case_vector);

  std::vector<bool> getMonitoringCaseFlagsVector() const;
  void setMonitoringCaseFlagsVector(const std::vector<bool> &monitoring_case_flags_vector);

  INT8 getSleepModeOutput() const;
  void setSleepModeOutput(const INT8 &sleep_mode_output);

  bool getHostErrorFlagContaminationWarning() const;
  void setHostErrorFlagContaminationWarning(bool host_error_flag_contamination_warning);

  bool getHostErrorFlagContaminationError() const;
  void setHostErrorFlagContaminationError(bool host_error_flag_contamination_error);

  bool getHostErrorFlagManipulationError() const;
  void setHostErrorFlagManipulationError(bool host_error_flag_manipulation_error);

  bool getHostErrorFlagGlare() const;
  void setHostErrorFlagGlare(bool host_error_flag_glare);

  bool getHostErrorFlagReferenceContourIntruded() const;
  void setHostErrorFlagReferenceContourIntruded(bool host_error_flag_reference_contour_intruded);

  bool getHostErrorFlagCriticalError() const;
  void setHostErrorFlagCriticalError(bool host_error_flag_critical_error);

  INT16 getVelocity0() const;
  void setVelocity0(const INT16 &velocity_0);

  INT16 getVelocity1() const;
  void setVelocity1(const INT16 &velocity_1);

  bool getVelocity0Valid() const;
  void setVelocity0Valid(bool velocity_0_valid);

  bool getVelocity1Valid() const;
  void setVelocity1Valid(bool velocity_1_valid);

  bool getVelocity0TransmittedSafely() const;
  void setVelocity0TransmittedSafely(bool velocity_0_transmitted_safely);

  bool getVelocity1TransmittedSafely() const;
  void setVelocity1TransmittedSafely(bool velocity_1_transmitted_safely);

  std::vector<INT16> getResultingVelocityVector() const;
  void setResultingVelocityVector(const std::vector<INT16> &resulting_velocity_vector);

  std::vector<bool> getResultingVelocityIsValidVector() const;
  void setResultingVelocityIsValidVector(const std::vector<bool> &resulting_velocity_is_valid_vector);

  bool getFlagsSleepModeOutputIsValid() const;
  void setFlagsSleepModeOutputIsValid(bool flags_sleep_mode_output_is_valid);

  bool getFlagsHostErrorFlagsAreValid() const;
  void setFlagsHostErrorFlagsAreValid(bool flags_host_error_flags_are_valid);

private:
  std::vector<bool> m_eval_out_vector;
  std::vector<bool> m_eval_out_is_safe_vector;
  std::vector<bool> m_eval_out_is_valid_vector;

  std::vector<UINT16> m_monitoring_case_vector;
  std::vector<bool> m_monitoring_case_flags_vector;

  INT8 m_sleep_mode_output; //TODO ENUM8

  bool m_host_error_flag_contamination_warning;
  bool m_host_error_flag_contamination_error;
  bool m_host_error_flag_manipulation_error;
  bool m_host_error_flag_glare;
  bool m_host_error_flag_reference_contour_intruded;
  bool m_host_error_flag_critical_error;

  INT16 m_velocity_0;
  INT16 m_velocity_1;

  bool m_velocity_0_valid;
  bool m_velocity_1_valid;
  bool m_velocity_0_transmitted_safely;
  bool m_velocity_1_transmitted_safely;

  std::vector<INT16> m_resulting_velocity_vector;
  std::vector<bool> m_resulting_velocity_is_valid_vector;

  bool m_flags_sleep_mode_output_is_valid;
  bool m_flags_host_error_flags_are_valid;
};


}
}