#pragma once

class CCitadelHideoutPropSlot : public C_BaseEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    int32 m_nSlotID; // offset 0x600, size 0x4, align 4
    EHideoutPropSlotType_t m_nSlotType; // offset 0x604, size 0x4, align 4
    CHandle< CCitadelHideoutPropBase > m_hProp; // offset 0x608, size 0x4, align 4
    char _pad_060C[0x4]; // offset 0x60C
};
