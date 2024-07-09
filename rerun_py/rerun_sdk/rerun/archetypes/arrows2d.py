# DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/python/mod.rs
# Based on "crates/store/re_types/definitions/rerun/archetypes/arrows2d.fbs".

# You can extend this class by creating a "Arrows2DExt" class in "arrows2d_ext.py".

from __future__ import annotations

from attrs import define, field

from .. import components
from .._baseclasses import (
    Archetype,
)
from .arrows2d_ext import Arrows2DExt

__all__ = ["Arrows2D"]


@define(str=False, repr=False, init=False)
class Arrows2D(Arrows2DExt, Archetype):
    """
    **Archetype**: 2D arrows with optional colors, radii, labels, etc.

    Example
    -------
    ### Simple batch of 2D arrows:
    ```python
    import rerun as rr

    rr.init("rerun_example_arrow2d", spawn=True)

    rr.log(
        "arrows",
        rr.Arrows2D(
            origins=[[0.25, 0.0], [0.25, 0.0], [-0.1, -0.1]],
            vectors=[[1.0, 0.0], [0.0, -1.0], [-0.7, 0.7]],
            colors=[[255, 0, 0], [0, 255, 0], [127, 0, 255]],
            labels=["right", "up", "left-down"],
            radii=0.025,
        ),
    )
    ```
    <center>
    <picture>
      <source media="(max-width: 480px)" srcset="https://static.rerun.io/arrow2d_simple/59f044ccc03f7bc66ee802288f75706618b29a6e/480w.png">
      <source media="(max-width: 768px)" srcset="https://static.rerun.io/arrow2d_simple/59f044ccc03f7bc66ee802288f75706618b29a6e/768w.png">
      <source media="(max-width: 1024px)" srcset="https://static.rerun.io/arrow2d_simple/59f044ccc03f7bc66ee802288f75706618b29a6e/1024w.png">
      <source media="(max-width: 1200px)" srcset="https://static.rerun.io/arrow2d_simple/59f044ccc03f7bc66ee802288f75706618b29a6e/1200w.png">
      <img src="https://static.rerun.io/arrow2d_simple/59f044ccc03f7bc66ee802288f75706618b29a6e/full.png" width="640">
    </picture>
    </center>

    """

    # __init__ can be found in arrows2d_ext.py

    def __attrs_clear__(self) -> None:
        """Convenience method for calling `__attrs_init__` with all `None`s."""
        self.__attrs_init__(
            vectors=None,  # type: ignore[arg-type]
            origins=None,  # type: ignore[arg-type]
            radii=None,  # type: ignore[arg-type]
            colors=None,  # type: ignore[arg-type]
            labels=None,  # type: ignore[arg-type]
            draw_order=None,  # type: ignore[arg-type]
            class_ids=None,  # type: ignore[arg-type]
        )

    @classmethod
    def _clear(cls) -> Arrows2D:
        """Produce an empty Arrows2D, bypassing `__init__`."""
        inst = cls.__new__(cls)
        inst.__attrs_clear__()
        return inst

    vectors: components.Vector2DBatch = field(
        metadata={"component": "required"},
        converter=components.Vector2DBatch._required,  # type: ignore[misc]
    )
    # All the vectors for each arrow in the batch.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    origins: components.Position2DBatch | None = field(
        metadata={"component": "optional"},
        default=None,
        converter=components.Position2DBatch._optional,  # type: ignore[misc]
    )
    # All the origin (base) positions for each arrow in the batch.
    #
    # If no origins are set, (0, 0) is used as the origin for each arrow.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    radii: components.RadiusBatch | None = field(
        metadata={"component": "optional"},
        default=None,
        converter=components.RadiusBatch._optional,  # type: ignore[misc]
    )
    # Optional radii for the arrows.
    #
    # The shaft is rendered as a line with `radius = 0.5 * radius`.
    # The tip is rendered with `height = 2.0 * radius` and `radius = 1.0 * radius`.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    colors: components.ColorBatch | None = field(
        metadata={"component": "optional"},
        default=None,
        converter=components.ColorBatch._optional,  # type: ignore[misc]
    )
    # Optional colors for the points.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    labels: components.TextBatch | None = field(
        metadata={"component": "optional"},
        default=None,
        converter=components.TextBatch._optional,  # type: ignore[misc]
    )
    # Optional text labels for the arrows.
    #
    # If there's a single label present, it will be placed at the center of the entity.
    # Otherwise, each instance will have its own label.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    draw_order: components.DrawOrderBatch | None = field(
        metadata={"component": "optional"},
        default=None,
        converter=components.DrawOrderBatch._optional,  # type: ignore[misc]
    )
    # An optional floating point value that specifies the 2D drawing order.
    #
    # Objects with higher values are drawn on top of those with lower values.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    class_ids: components.ClassIdBatch | None = field(
        metadata={"component": "optional"},
        default=None,
        converter=components.ClassIdBatch._optional,  # type: ignore[misc]
    )
    # Optional class Ids for the points.
    #
    # The class ID provides colors and labels if not specified explicitly.
    #
    # (Docstring intentionally commented out to hide this field from the docs)

    __str__ = Archetype.__str__
    __repr__ = Archetype.__repr__  # type: ignore[assignment]
