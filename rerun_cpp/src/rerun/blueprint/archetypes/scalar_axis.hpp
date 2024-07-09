// DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/store/re_types/definitions/rerun/blueprint/archetypes/scalar_axis.fbs".

#pragma once

#include "../../blueprint/components/lock_range_during_zoom.hpp"
#include "../../collection.hpp"
#include "../../compiler_utils.hpp"
#include "../../components/range1d.hpp"
#include "../../data_cell.hpp"
#include "../../indicator_component.hpp"
#include "../../result.hpp"

#include <cstdint>
#include <optional>
#include <utility>
#include <vector>

namespace rerun::blueprint::archetypes {
    /// **Archetype**: Configuration for the scalar axis of a plot.
    struct ScalarAxis {
        /// The range of the axis.
        ///
        /// If unset, the range well be automatically determined based on the queried data.
        std::optional<rerun::components::Range1D> range;

        /// If enabled, the Y axis range will remain locked to the specified range when zooming.
        std::optional<rerun::blueprint::components::LockRangeDuringZoom> zoom_lock;

      public:
        static constexpr const char IndicatorComponentName[] =
            "rerun.blueprint.components.ScalarAxisIndicator";

        /// Indicator component, used to identify the archetype when converting to a list of components.
        using IndicatorComponent = rerun::components::IndicatorComponent<IndicatorComponentName>;

      public:
        ScalarAxis() = default;
        ScalarAxis(ScalarAxis&& other) = default;

        /// The range of the axis.
        ///
        /// If unset, the range well be automatically determined based on the queried data.
        ScalarAxis with_range(rerun::components::Range1D _range) && {
            range = std::move(_range);
            // See: https://github.com/rerun-io/rerun/issues/4027
            RR_WITH_MAYBE_UNINITIALIZED_DISABLED(return std::move(*this);)
        }

        /// If enabled, the Y axis range will remain locked to the specified range when zooming.
        ScalarAxis with_zoom_lock(rerun::blueprint::components::LockRangeDuringZoom _zoom_lock) && {
            zoom_lock = std::move(_zoom_lock);
            // See: https://github.com/rerun-io/rerun/issues/4027
            RR_WITH_MAYBE_UNINITIALIZED_DISABLED(return std::move(*this);)
        }
    };

} // namespace rerun::blueprint::archetypes

namespace rerun {
    /// \private
    template <typename T>
    struct AsComponents;

    /// \private
    template <>
    struct AsComponents<blueprint::archetypes::ScalarAxis> {
        /// Serialize all set component batches.
        static Result<std::vector<DataCell>> serialize(
            const blueprint::archetypes::ScalarAxis& archetype
        );
    };
} // namespace rerun
