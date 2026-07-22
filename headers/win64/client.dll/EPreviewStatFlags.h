#pragma once

enum EPreviewStatFlags : uint32_t  // sizeof 0x4
{
    EPreviewFlag_None = 0,
    EPreviewFlag_WithPreviewItem = 1,
    EPreviewFlag_WithTierBonuses = 2,
    EPreviewFlag_WithPreviewItemConditionals = 4,
    EPreviewFlag_OnlyTierBonuses = 8,
    EPreviewFlag_NoTierBonusesForAllMods = 16,
};
