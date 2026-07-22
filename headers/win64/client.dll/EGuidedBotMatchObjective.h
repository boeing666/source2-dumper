#pragma once

enum EGuidedBotMatchObjective : uint32_t  // sizeof 0x4
{
    EGuidedBotMatchObjective_LaningMetrics = 0,
    EGuidedBotMatchObjective_PowerUp = 1,
    EGuidedBotMatchObjective_KillGuardian = 2,
    EGuidedBotMatchObjective_Complete = 3,
};
