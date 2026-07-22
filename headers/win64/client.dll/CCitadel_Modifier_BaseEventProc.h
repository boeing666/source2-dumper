#pragma once

class CCitadel_Modifier_BaseEventProc : public CCitadelModifier /*0x0*/  // sizeof 0x1F8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CUtlVector< C_BaseEntity* > m_vecProcdUnitsThisShot; // offset 0xC0, size 0x18, align 8
    CUtlVector< C_BaseEntity* > m_vecTrackedUnitsThisFrame; // offset 0xD8, size 0x18, align 8
    ShotID_t m_nLastShotId; // offset 0xF0, size 0x4, align 255
    char _pad_00F4[0x104]; // offset 0xF4
};
