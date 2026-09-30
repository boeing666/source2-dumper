#pragma once

class CNPC_TrooperNeutral : public CAI_CitadelNPC /*0x0*/  // sizeof 0x17E0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1714]; // offset 0x0
    VectorWS m_vecSpawnOrigin; // offset 0x1714, size 0xC, align 4
    char _pad_1720[0xC0]; // offset 0x1720
};
