// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RMW__QOS_PROFILES_H_
#define RMW__QOS_PROFILES_H_

#if __cplusplus
extern "C"
{
#endif

#include "rmw/types.h"

static const rmw_qos_profile_t rmw_qos_profile_sensor_data =
{
  RMW_QOS_POLICY_KEEP_LAST_HISTORY,
  5,
  RMW_QOS_POLICY_BEST_EFFORT,
  RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT
};

static const rmw_qos_profile_t rmw_qos_profile_parameters =
{
  RMW_QOS_POLICY_KEEP_LAST_HISTORY,
  1000,
  RMW_QOS_POLICY_RELIABLE,
  RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT
};

static const rmw_qos_profile_t rmw_qos_profile_default =
{
  RMW_QOS_POLICY_KEEP_ALL_HISTORY,
  10,
  RMW_QOS_POLICY_RELIABLE,
  RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT
};

static const rmw_qos_profile_t rmw_qos_profile_services_default =
{
  RMW_QOS_POLICY_KEEP_LAST_HISTORY,
  10,
  RMW_QOS_POLICY_RELIABLE,
  RMW_QOS_POLICY_TRANSIENT_LOCAL_DURABILITY
};

static const rmw_qos_profile_t rmw_qos_profile_parameter_events =
{
  RMW_QOS_POLICY_KEEP_ALL_HISTORY,
  1000,
  RMW_QOS_POLICY_RELIABLE,
  RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT
};

static const rmw_qos_profile_t rmw_qos_profile_system_default =
{
  RMW_QOS_POLICY_HISTORY_SYSTEM_DEFAULT,
  RMW_QOS_POLICY_DEPTH_SYSTEM_DEFAULT,
  RMW_QOS_POLICY_RELIABILITY_SYSTEM_DEFAULT,
  RMW_QOS_POLICY_DURABILITY_SYSTEM_DEFAULT
};

#if __cplusplus
}
#endif

#endif  // RMW__QOS_PROFILES_H_
