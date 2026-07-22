#pragma once

class CBtActionCombatPositioning : public CBtNode /*0x0*/  // sizeof 0xB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CUtlString m_szSensorInputKey; // offset 0x68, size 0x8, align 8
    char _pad_0070[0x10]; // offset 0x70
    CUtlString m_szIsAttackingKey; // offset 0x80, size 0x8, align 8
    CountdownTimer m_ActionTimer; // offset 0x88, size 0x18, align 8
    bool m_bCrouching; // offset 0xA0, size 0x1, align 1
    char _pad_00A1[0xF]; // offset 0xA1
};
