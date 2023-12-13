// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/re_types/definitions/rerun/testing/datatypes/fuzzy.fbs".

#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <rerun/result.hpp>

namespace arrow {
    class Array;
    class DataType;
    class StructBuilder;
} // namespace arrow

namespace rerun::datatypes {
    struct AffixFuzzer22 {
        std::array<uint8_t, 4> fixed_sized_native;

      public:
        AffixFuzzer22() = default;

        AffixFuzzer22(std::array<uint8_t, 4> fixed_sized_native_)
            : fixed_sized_native(fixed_sized_native_) {}

        AffixFuzzer22& operator=(std::array<uint8_t, 4> fixed_sized_native_) {
            fixed_sized_native = fixed_sized_native_;
            return *this;
        }
    };
} // namespace rerun::datatypes

namespace rerun {
    template <typename T>
    struct Loggable;

    /// \private
    template <>
    struct Loggable<datatypes::AffixFuzzer22> {
        static constexpr const char Name[] = "rerun.testing.datatypes.AffixFuzzer22";

        /// Returns the arrow data type this type corresponds to.
        static const std::shared_ptr<arrow::DataType>& arrow_datatype();

        /// Fills an arrow array builder with an array of this type.
        static rerun::Error fill_arrow_array_builder(
            arrow::StructBuilder* builder, const datatypes::AffixFuzzer22* elements,
            size_t num_elements
        );

        /// Serializes an array of `rerun::datatypes::AffixFuzzer22` into an arrow array.
        static Result<std::shared_ptr<arrow::Array>> to_arrow(
            const datatypes::AffixFuzzer22* instances, size_t num_instances
        );
    };
} // namespace rerun
