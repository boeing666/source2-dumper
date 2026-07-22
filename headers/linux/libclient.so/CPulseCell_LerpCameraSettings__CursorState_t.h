#pragma once

struct CPulseCell_LerpCameraSettings::CursorState_t : public CPulseCell_BaseLerp::CursorState_t /*0x0*/  // sizeof 0x2C, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CHandle< C_PointCamera > m_hCamera; // offset 0x8, size 0x4, align 4
    PointCameraSettings_t m_OverlaidStart; // offset 0xC, size 0x10, align 4
    PointCameraSettings_t m_OverlaidEnd; // offset 0x1C, size 0x10, align 4
};
