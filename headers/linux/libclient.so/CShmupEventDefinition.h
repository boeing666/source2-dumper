#pragma once

class CShmupEventDefinition  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    EShmupEventType m_type; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CShmupEventEnemySpawn > m_vecEnemySpawns; // offset 0x10, size 0x18, align 8 | MPropertySuppressExpr
    CUtlString m_strPathName; // offset 0x28, size 0x8, align 8 | MPropertySuppressExpr
    CUtlString m_strUIEvent; // offset 0x30, size 0x8, align 8 | MPropertySuppressExpr
    char _pad_0038[0x8]; // offset 0x38
};
