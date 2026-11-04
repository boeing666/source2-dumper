#pragma once

struct PhysShapeMarkup_t  // sizeof 0x10, align 0x8 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    int32 m_nBodyInAggregate; // offset 0x0, size 0x4, align 4
    int32 m_nShapeInBody; // offset 0x4, size 0x4, align 4
    CGlobalSymbol m_sHitGroup; // offset 0x8, size 0x8, align 8
};
