# DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/python/mod.rs
# Based on "crates/store/re_types/definitions/rerun/blueprint/archetypes/scalar_axis.fbs".

# You can extend this class by creating a "ScalarAxisExt" class in "scalar_axis_ext.py".

from __future__ import annotations

from typing import Any

from attrs import define, field

from ... import components, datatypes
from ..._baseclasses import (
    Archetype,
)
from ...blueprint import components as blueprint_components
from ...error_utils import catch_and_log_exceptions

__all__ = ["ScalarAxis"]


@define(str=False, repr=False, init=False)
class ScalarAxis(Archetype):
    """**Archetype**: Configuration for the scalar axis of a plot."""

    def __init__(self: Any, *, range: datatypes.Range1DLike | None = None, zoom_lock: datatypes.BoolLike | None = None):
        """
        Create a new instance of the ScalarAxis archetype.

        Parameters
        ----------
        range:
            The range of the axis.

            If unset, the range well be automatically determined based on the queried data.
        zoom_lock:
            If enabled, the Y axis range will remain locked to the specified range when zooming.

        """

        # You can define your own __init__ function as a member of ScalarAxisExt in scalar_axis_ext.py
        with catch_and_log_exceptions(context=self.__class__.__name__):
            self.__attrs_init__(range=range, zoom_lock=zoom_lock)
            return
        self.__attrs_clear__()

    def __attrs_clear__(self) -> None:
        """Convenience method for calling `__attrs_init__` with all `None`s."""
        self.__attrs_init__(
            range=None,  # type: ignore[arg-type]
            zoom_lock=None,  # type: ignore[arg-type]
        )

    @classmethod
    def _clear(cls) -> ScalarAxis:
        """Produce an empty ScalarAxis, bypassing `__init__`."""
        inst = cls.__new__(cls)
        inst.__attrs_clear__()
        return inst

    range: components.Range1DBatch | None = field(
        metadata={"component": "optional"},
        default=None,
        converter=components.Range1DBatch._optional,  # type: ignore[misc]
    )
    # The range of the axis.
    #
    # If unset, the range well be automatically determined based on the queried data.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    zoom_lock: blueprint_components.LockRangeDuringZoomBatch | None = field(
        metadata={"component": "optional"},
        default=None,
        converter=blueprint_components.LockRangeDuringZoomBatch._optional,  # type: ignore[misc]
    )
    # If enabled, the Y axis range will remain locked to the specified range when zooming.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    __str__ = Archetype.__str__
    __repr__ = Archetype.__repr__  # type: ignore[assignment]
