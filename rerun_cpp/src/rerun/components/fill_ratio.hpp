// DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/store/re_types/definitions/rerun/components/fill_ratio.fbs".

#pragma once

#include "../datatypes/float32.hpp"
#include "../result.hpp"

#include <cstdint>
#include <memory>

namespace rerun::components {
    /// **Component**: How much a primitive fills out the available space.
    ///
    /// Used for instance to scale the points of the point cloud created from `DepthImage` projection in 3D views.
    /// Valid range is from 0 to max float although typically values above 1.0 are not useful.
    ///
    /// Defaults to 1.0.
    struct FillRatio {
        rerun::datatypes::Float32 value;

      public:
        FillRatio() = default;

        FillRatio(rerun::datatypes::Float32 value_) : value(value_) {}

        FillRatio& operator=(rerun::datatypes::Float32 value_) {
            value = value_;
            return *this;
        }

        FillRatio(float value_) : value(value_) {}

        FillRatio& operator=(float value_) {
            value = value_;
            return *this;
        }

        /// Cast to the underlying Float32 datatype
        operator rerun::datatypes::Float32() const {
            return value;
        }
    };
} // namespace rerun::components

namespace rerun {
    static_assert(sizeof(rerun::datatypes::Float32) == sizeof(components::FillRatio));

    /// \private
    template <>
    struct Loggable<components::FillRatio> {
        static constexpr const char Name[] = "rerun.components.FillRatio";

        /// Returns the arrow data type this type corresponds to.
        static const std::shared_ptr<arrow::DataType>& arrow_datatype() {
            return Loggable<rerun::datatypes::Float32>::arrow_datatype();
        }

        /// Serializes an array of `rerun::components::FillRatio` into an arrow array.
        static Result<std::shared_ptr<arrow::Array>> to_arrow(
            const components::FillRatio* instances, size_t num_instances
        ) {
            return Loggable<rerun::datatypes::Float32>::to_arrow(&instances->value, num_instances);
        }
    };
} // namespace rerun
