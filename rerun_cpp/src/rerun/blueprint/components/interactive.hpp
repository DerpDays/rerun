// DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/store/re_types/definitions/rerun/blueprint/components/interactive.fbs".

#pragma once

#include "../../datatypes/bool.hpp"
#include "../../result.hpp"

#include <cstdint>
#include <memory>

namespace rerun::blueprint::components {
    /// **Component**: Whether the entity can be interacted with.
    ///
    /// Non interactive components are still visible, but mouse interactions in the view are disabled.
    struct Interactive {
        rerun::datatypes::Bool interactive;

      public:
        Interactive() = default;

        Interactive(rerun::datatypes::Bool interactive_) : interactive(interactive_) {}

        Interactive& operator=(rerun::datatypes::Bool interactive_) {
            interactive = interactive_;
            return *this;
        }

        Interactive(bool value_) : interactive(value_) {}

        Interactive& operator=(bool value_) {
            interactive = value_;
            return *this;
        }

        /// Cast to the underlying Bool datatype
        operator rerun::datatypes::Bool() const {
            return interactive;
        }
    };
} // namespace rerun::blueprint::components

namespace rerun {
    static_assert(sizeof(rerun::datatypes::Bool) == sizeof(blueprint::components::Interactive));

    /// \private
    template <>
    struct Loggable<blueprint::components::Interactive> {
        static constexpr const char Name[] = "rerun.blueprint.components.Interactive";

        /// Returns the arrow data type this type corresponds to.
        static const std::shared_ptr<arrow::DataType>& arrow_datatype() {
            return Loggable<rerun::datatypes::Bool>::arrow_datatype();
        }

        /// Serializes an array of `rerun::blueprint:: components::Interactive` into an arrow array.
        static Result<std::shared_ptr<arrow::Array>> to_arrow(
            const blueprint::components::Interactive* instances, size_t num_instances
        ) {
            return Loggable<rerun::datatypes::Bool>::to_arrow(
                &instances->interactive,
                num_instances
            );
        }
    };
} // namespace rerun
