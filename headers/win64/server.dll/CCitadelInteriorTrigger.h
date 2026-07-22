#pragma once

class CCitadelInteriorTrigger : public CTriggerModifier /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    int32 m_nInteriorType; // offset 0x8F0, size 0x4, align 4
    CUtlStringToken m_tInteriorModifier; // offset 0x8F4, size 0x4, align 4
};
