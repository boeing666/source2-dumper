#pragma once

class CPathParameters  // sizeof 0x40, align 0x10 [trivial_dtor] (particles) {MGetKV3ClassDefaults}
{
public:
    int32 m_nStartControlPointNumber; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nEndControlPointNumber; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nBulgeControl; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBulge; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMidPoint; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vStartPointOffset; // offset 0x14, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vMidPointOffset; // offset 0x20, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vEndOffset; // offset 0x2C, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_0038[0x8]; // offset 0x38
};
