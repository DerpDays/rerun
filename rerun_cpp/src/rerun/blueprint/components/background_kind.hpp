// DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/store/re_types/definitions/rerun/blueprint/components/background_kind.fbs".

#pragma once

#include "../../result.hpp"

#include <cstdint>
#include <memory>

namespace arrow {
    class Array;
    class DataType;
    class SparseUnionBuilder;
} // namespace arrow

namespace rerun::blueprint::components {
    /// **Component**: The type of the background in a view.
    enum class BackgroundKind : uint8_t {

        /// A dark gradient.
        ///
        /// In 3D views it changes depending on the direction of the view.
        GradientDark = 1,

        /// A bright gradient.
        ///
        /// In 3D views it changes depending on the direction of the view.
        GradientBright = 2,

        /// Simple uniform color.
        SolidColor = 3,
    };
} // namespace rerun::blueprint::components

namespace rerun {
    template <typename T>
    struct Loggable;

    /// \private
    template <>
    struct Loggable<blueprint::components::BackgroundKind> {
        static constexpr const char Name[] = "rerun.blueprint.components.BackgroundKind";

        /// Returns the arrow data type this type corresponds to.
        static const std::shared_ptr<arrow::DataType>& arrow_datatype();

        /// Serializes an array of `rerun::blueprint:: components::BackgroundKind` into an arrow array.
        static Result<std::shared_ptr<arrow::Array>> to_arrow(
            const blueprint::components::BackgroundKind* instances, size_t num_instances
        );

        /// Fills an arrow array builder with an array of this type.
        static rerun::Error fill_arrow_array_builder(
            arrow::SparseUnionBuilder* builder,
            const blueprint::components::BackgroundKind* elements, size_t num_elements
        );
    };
} // namespace rerun
