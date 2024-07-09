// DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/store/re_types/definitions/rerun/components/media_type.fbs".

#pragma once

#include "../datatypes/utf8.hpp"
#include "../result.hpp"

#include <cstdint>
#include <memory>
#include <string>
#include <utility>

namespace rerun::components {
    /// **Component**: A standardized media type (RFC2046, formerly known as MIME types), encoded as a utf8 string.
    ///
    /// The complete reference of officially registered media types is maintained by the IANA and can be
    /// consulted at <https://www.iana.org/assignments/media-types/media-types.xhtml>.
    struct MediaType {
        rerun::datatypes::Utf8 value;

      public:
        // Extensions to generated type defined in 'media_type_ext.cpp'

        /// Construct media type from a null-terminated UTF8 string.
        MediaType(const char* media_type) : value(media_type) {}

        // TODO(#2388): come up with some DSL in our flatbuffers definitions so that we can
        // declare these constants directly in there.

        /// `text/plain`
        static MediaType plain_text() {
            return "text/plain";
        }

        /// `text/markdown`
        ///
        /// <https://www.iana.org/assignments/media-types/text/markdown>
        static MediaType markdown() {
            return "text/markdown";
        }

        /// [`glTF`](https://en.wikipedia.org/wiki/GlTF): `model/gltf+json`.
        ///
        /// <https://www.iana.org/assignments/media-types/model/gltf+json>
        static MediaType gltf() {
            return "model/gltf+json";
        }

        /// [Binary `glTF`](https://en.wikipedia.org/wiki/GlTF): `model/gltf-binary`.
        ///
        /// <https://www.iana.org/assignments/media-types/model/gltf-binary>
        static MediaType glb() {
            return "model/gltf-binary";
        }

        /// [Wavefront `obj`](https://en.wikipedia.org/wiki/Wavefront_.obj_file): `model/obj`.
        ///
        /// <https://www.iana.org/assignments/media-types/model/obj>
        static MediaType obj() {
            return "model/obj";
        }

        /// [Stereolithography Model `stl`](https://en.wikipedia.org/wiki/STL_(file_format)): `model/stl`.
        ///
        /// Either binary or ASCII.
        /// <https://www.iana.org/assignments/media-types/model/stl>
        static MediaType stl() {
            return "model/stl";
        }

      public:
        MediaType() = default;

        MediaType(rerun::datatypes::Utf8 value_) : value(std::move(value_)) {}

        MediaType& operator=(rerun::datatypes::Utf8 value_) {
            value = std::move(value_);
            return *this;
        }

        MediaType(std::string value_) : value(std::move(value_)) {}

        MediaType& operator=(std::string value_) {
            value = std::move(value_);
            return *this;
        }

        /// Cast to the underlying Utf8 datatype
        operator rerun::datatypes::Utf8() const {
            return value;
        }
    };
} // namespace rerun::components

namespace rerun {
    static_assert(sizeof(rerun::datatypes::Utf8) == sizeof(components::MediaType));

    /// \private
    template <>
    struct Loggable<components::MediaType> {
        static constexpr const char Name[] = "rerun.components.MediaType";

        /// Returns the arrow data type this type corresponds to.
        static const std::shared_ptr<arrow::DataType>& arrow_datatype() {
            return Loggable<rerun::datatypes::Utf8>::arrow_datatype();
        }

        /// Serializes an array of `rerun::components::MediaType` into an arrow array.
        static Result<std::shared_ptr<arrow::Array>> to_arrow(
            const components::MediaType* instances, size_t num_instances
        ) {
            return Loggable<rerun::datatypes::Utf8>::to_arrow(&instances->value, num_instances);
        }
    };
} // namespace rerun
