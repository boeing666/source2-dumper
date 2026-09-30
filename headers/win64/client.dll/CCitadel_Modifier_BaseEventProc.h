#pragma once

class CCitadel_Modifier_BaseEventProc : public CCitadelModifier /*0x0*/  // sizeof 0x2C8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CUtlVector< C_BaseEntity* > m_vecProcdUnitsThisShot; // offset 0x130, size 0x18, align 8
    CUtlVector< C_BaseEntity* > m_vecTrackedUnitsThisFrame; // offset 0x148, size 0x18, align 8
    ShotID_t m_nLastShotId; // offset 0x160, size 0x4, align 255
    char _pad_0164[0x164]; // offset 0x164
};
