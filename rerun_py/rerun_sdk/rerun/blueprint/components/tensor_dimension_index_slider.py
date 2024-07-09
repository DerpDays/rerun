# DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/python/mod.rs
# Based on "crates/store/re_types/definitions/rerun/blueprint/components/tensor_dimension_index_slider.fbs".

# You can extend this class by creating a "TensorDimensionIndexSliderExt" class in "tensor_dimension_index_slider_ext.py".

from __future__ import annotations

from ..._baseclasses import (
    ComponentBatchMixin,
    ComponentMixin,
)
from ...blueprint import datatypes as blueprint_datatypes

__all__ = ["TensorDimensionIndexSlider", "TensorDimensionIndexSliderBatch", "TensorDimensionIndexSliderType"]


class TensorDimensionIndexSlider(blueprint_datatypes.TensorDimensionIndexSlider, ComponentMixin):
    """**Component**: Show a slider for the index of some dimension of a slider."""

    _BATCH_TYPE = None
    # You can define your own __init__ function as a member of TensorDimensionIndexSliderExt in tensor_dimension_index_slider_ext.py

    # Note: there are no fields here because TensorDimensionIndexSlider delegates to datatypes.TensorDimensionIndexSlider
    pass


class TensorDimensionIndexSliderType(blueprint_datatypes.TensorDimensionIndexSliderType):
    _TYPE_NAME: str = "rerun.blueprint.components.TensorDimensionIndexSlider"


class TensorDimensionIndexSliderBatch(blueprint_datatypes.TensorDimensionIndexSliderBatch, ComponentBatchMixin):
    _ARROW_TYPE = TensorDimensionIndexSliderType()


# This is patched in late to avoid circular dependencies.
TensorDimensionIndexSlider._BATCH_TYPE = TensorDimensionIndexSliderBatch  # type: ignore[assignment]
