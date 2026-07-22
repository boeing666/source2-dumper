#pragma once

enum VisualNovelDialogueLineType_t : uint32_t  // sizeof 0x4
{
    k_eVisualNovelDialogueLineType_Invalid = 0,
    k_eVisualNovelDialogueLineType_Text = 1,
    k_eVisualNovelDialogueLineType_PopupText = 2,
    k_eVisualNovelDialogueLineType_Comic = 3,
    k_eVisualNovelDialogueLineType_ExternalComic = 4,
    k_eVisualNovelDialogueLineType_Video = 5,
    k_eVisualNovelDialogueLineType_PopupImage = 6,
    k_eVisualNovelDialogueLineType_ConditionalIf = 7,
    k_eVisualNovelDialogueLineType_ConditionalElse = 8,
    k_eVisualNovelDialogueLineType_ActionSwipe = 9,
    k_eVisualNovelDialogueLineType_MotionComic = 10,
    k_eVisualNovelDialogueLineType_PortraitSwap = 11,
};
