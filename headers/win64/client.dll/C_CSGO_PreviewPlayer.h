#pragma once

class C_CSGO_PreviewPlayer : public C_CSPlayerPawn /*0x0*/  // sizeof 0x3500, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x3460]; // offset 0x0
    CGlobalSymbol m_animgraphCharacterModeString; // offset 0x3460, size 0x8, align 8
    float32 m_flInitialModelScale; // offset 0x3468, size 0x4, align 4
    char _pad_346C[0x94]; // offset 0x346C
};
