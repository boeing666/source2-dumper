#pragma once

class CBaseProp : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD32]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0xD32, size 0x1, align 1
    char _pad_0D33[0x1]; // offset 0xD33
    int32 m_iShapeType; // offset 0xD34, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0xD38, size 0x1, align 1
    char _pad_0D39[0x7]; // offset 0xD39
    CTransform m_mPreferredCatchTransform; // offset 0xD40, size 0x20, align 16
};
