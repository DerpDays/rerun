# DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/python/mod.rs
# Based on "crates/store/re_types/definitions/rerun/datatypes/tensor_dimension_selection.fbs".

# You can extend this class by creating a "TensorDimensionIndexSelectionExt" class in "tensor_dimension_index_selection_ext.py".

from __future__ import annotations

from typing import Any, Sequence, Union

import numpy as np
import pyarrow as pa
from attrs import define, field

from .._baseclasses import (
    BaseBatch,
    BaseExtensionType,
)

__all__ = [
    "TensorDimensionIndexSelection",
    "TensorDimensionIndexSelectionArrayLike",
    "TensorDimensionIndexSelectionBatch",
    "TensorDimensionIndexSelectionLike",
    "TensorDimensionIndexSelectionType",
]


@define(init=False)
class TensorDimensionIndexSelection:
    """
    **Datatype**: Indexing a specific tensor dimension.

    Selecting `dimension=2` and `index=42` is similar to doing `tensor[:, :, 42, :, :, …]` in numpy.
    """

    def __init__(self: Any, dimension: int, index: int):
        """
        Create a new instance of the TensorDimensionIndexSelection datatype.

        Parameters
        ----------
        dimension:
            The dimension number to select.
        index:
            The index along the dimension to use.

        """

        # You can define your own __init__ function as a member of TensorDimensionIndexSelectionExt in tensor_dimension_index_selection_ext.py
        self.__attrs_init__(dimension=dimension, index=index)

    dimension: int = field(converter=int)
    # The dimension number to select.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    index: int = field(converter=int)
    # The index along the dimension to use.
    #
    # (Docstring intentionally commented out to hide this field from the docs)


TensorDimensionIndexSelectionLike = TensorDimensionIndexSelection
TensorDimensionIndexSelectionArrayLike = Union[
    TensorDimensionIndexSelection,
    Sequence[TensorDimensionIndexSelectionLike],
]


class TensorDimensionIndexSelectionType(BaseExtensionType):
    _TYPE_NAME: str = "rerun.datatypes.TensorDimensionIndexSelection"

    def __init__(self) -> None:
        pa.ExtensionType.__init__(
            self,
            pa.struct([
                pa.field("dimension", pa.uint32(), nullable=False, metadata={}),
                pa.field("index", pa.uint64(), nullable=False, metadata={}),
            ]),
            self._TYPE_NAME,
        )


class TensorDimensionIndexSelectionBatch(BaseBatch[TensorDimensionIndexSelectionArrayLike]):
    _ARROW_TYPE = TensorDimensionIndexSelectionType()

    @staticmethod
    def _native_to_pa_array(data: TensorDimensionIndexSelectionArrayLike, data_type: pa.DataType) -> pa.Array:
        if isinstance(data, TensorDimensionIndexSelection):
            data = [data]

        return pa.StructArray.from_arrays(
            [
                pa.array(np.asarray([x.dimension for x in data], dtype=np.uint32)),
                pa.array(np.asarray([x.index for x in data], dtype=np.uint64)),
            ],
            fields=list(data_type),
        )
