// DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/store/re_types/definitions/rerun/blueprint/components/visible.fbs".

#include "visible.hpp"

#include <arrow/builder.h>
#include <arrow/type_fwd.h>

namespace rerun::blueprint::components {}

namespace rerun {
    const std::shared_ptr<arrow::DataType>&
        Loggable<blueprint::components::Visible>::arrow_datatype() {
        static const auto datatype = arrow::boolean();
        return datatype;
    }

    Result<std::shared_ptr<arrow::Array>> Loggable<blueprint::components::Visible>::to_arrow(
        const blueprint::components::Visible* instances, size_t num_instances
    ) {
        // TODO(andreas): Allow configuring the memory pool.
        arrow::MemoryPool* pool = arrow::default_memory_pool();
        auto datatype = arrow_datatype();

        ARROW_ASSIGN_OR_RAISE(auto builder, arrow::MakeBuilder(datatype, pool))
        if (instances && num_instances > 0) {
            RR_RETURN_NOT_OK(Loggable<blueprint::components::Visible>::fill_arrow_array_builder(
                static_cast<arrow::BooleanBuilder*>(builder.get()),
                instances,
                num_instances
            ));
        }
        std::shared_ptr<arrow::Array> array;
        ARROW_RETURN_NOT_OK(builder->Finish(&array));
        return array;
    }

    rerun::Error Loggable<blueprint::components::Visible>::fill_arrow_array_builder(
        arrow::BooleanBuilder* builder, const blueprint::components::Visible* elements,
        size_t num_elements
    ) {
        if (builder == nullptr) {
            return rerun::Error(ErrorCode::UnexpectedNullArgument, "Passed array builder is null.");
        }
        if (elements == nullptr) {
            return rerun::Error(
                ErrorCode::UnexpectedNullArgument,
                "Cannot serialize null pointer to arrow array."
            );
        }

        static_assert(sizeof(*elements) == sizeof(elements->visible));
        ARROW_RETURN_NOT_OK(builder->AppendValues(
            reinterpret_cast<const uint8_t*>(&elements->visible),
            static_cast<int64_t>(num_elements)
        ));

        return Error::ok();
    }
} // namespace rerun
