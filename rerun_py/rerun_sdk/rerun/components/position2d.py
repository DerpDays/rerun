# DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/python/mod.rs
# Based on "crates/store/re_types/definitions/rerun/components/position2d.fbs".

# You can extend this class by creating a "Position2DExt" class in "position2d_ext.py".

from __future__ import annotations

from .. import datatypes
from .._baseclasses import (
    ComponentBatchMixin,
    ComponentMixin,
)

__all__ = ["Position2D", "Position2DBatch", "Position2DType"]


class Position2D(datatypes.Vec2D, ComponentMixin):
    """**Component**: A position in 2D space."""

    _BATCH_TYPE = None
    # You can define your own __init__ function as a member of Position2DExt in position2d_ext.py

    # Note: there are no fields here because Position2D delegates to datatypes.Vec2D
    pass


class Position2DType(datatypes.Vec2DType):
    _TYPE_NAME: str = "rerun.components.Position2D"


class Position2DBatch(datatypes.Vec2DBatch, ComponentBatchMixin):
    _ARROW_TYPE = Position2DType()


# This is patched in late to avoid circular dependencies.
Position2D._BATCH_TYPE = Position2DBatch  # type: ignore[assignment]
