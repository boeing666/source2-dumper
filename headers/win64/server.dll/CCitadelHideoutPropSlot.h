#pragma once

class CCitadelHideoutPropSlot : public CBaseEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D0]; // offset 0x0
    int32 m_nSlotID; // offset 0x4D0, size 0x4, align 4
    EHideoutPropSlotType_t m_nSlotType; // offset 0x4D4, size 0x4, align 4
    CHandle< CCitadelHideoutPropBase > m_hProp; // offset 0x4D8, size 0x4, align 4
    char _pad_04DC[0x4]; // offset 0x4DC
};
