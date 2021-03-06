/**
 * @author Ryan Benasutti, WPI
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _OKAPI_PASSTHROUGHFILTER_HPP_
#define _OKAPI_PASSTHROUGHFILTER_HPP_

#include "okapi/filter/filter.hpp"

namespace okapi {
class PassthroughFilterArgs : public FilterArgs {};

class PassthroughFilter : public Filter {
  public:
  /**
   * A simple filter that does no filtering and just passes the input through.
   */
  PassthroughFilter();

  /**
   * Filters a value, like a sensor reading.
   *
   * @param ireading new measurement
   * @return filtered result
   */
  double filter(const double ireading) override;

  /**
   * Returns the previous output from filter.
   *
   * @return the previous output from filter
   */
  double getOutput() const override;

  protected:
  double lastOutput = 0;
};
} // namespace okapi

#endif
