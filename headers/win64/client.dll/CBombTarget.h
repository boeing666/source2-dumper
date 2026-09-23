#pragma once

class CBombTarget : public C_BaseTrigger /*0x0*/  // sizeof 0x1188, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    bool m_bBombPlantedHere; // offset 0x1180, size 0x1, align 1
    char _pad_1181[0x7]; // offset 0x1181
};
