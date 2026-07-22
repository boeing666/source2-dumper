#pragma once

class CItemParachute : public CPhysicsProp /*0x0*/  // sizeof 0xD80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    CHandle< CBaseEntity > m_hAttachedEntity; // offset 0xD60, size 0x4, align 4
    char _pad_0D64[0x10]; // offset 0xD64
    EObjectivePositions_t m_eObjectivePosition; // offset 0xD74, size 0x4, align 4
    char _pad_0D78[0x8]; // offset 0xD78
};
