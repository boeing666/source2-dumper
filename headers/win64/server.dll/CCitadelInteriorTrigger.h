#pragma once

class CCitadelInteriorTrigger : public CTriggerModifier /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    int32 m_nInteriorType; // offset 0xA00, size 0x4, align 4
    CUtlStringToken m_tInteriorModifier; // offset 0xA04, size 0x4, align 4
};
