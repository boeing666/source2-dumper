#pragma once

class CMatch3OpponentActionDefinition : public CMatch3AbilityBaseDefinition /*0x0*/  // sizeof 0x48, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    Match3OpponentActionID_t m_unOpponentActionID; // offset 0x38, size 0x4, align 255
    char _pad_003C[0xC]; // offset 0x3C
};
