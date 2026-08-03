#pragma once

class C_CSGO_PreviewPlayer : public C_CSPlayerPawn /*0x0*/  // sizeof 0x43A0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x4300]; // offset 0x0
    CGlobalSymbol m_animgraphCharacterModeString; // offset 0x4300, size 0x8, align 8
    float32 m_flInitialModelScale; // offset 0x4308, size 0x4, align 4
    char _pad_430C[0x94]; // offset 0x430C
};
