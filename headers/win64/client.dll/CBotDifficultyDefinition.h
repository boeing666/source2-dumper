#pragma once

class CBotDifficultyDefinition  // sizeof 0x110, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    ECitadelBotDifficulty difficulty; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    float32 free_gold_per_minute; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    float32 free_gold_per_minute_scaled; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    float32 takeover_spend_currency_time; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    bool allow_purchasing_anywhere; // offset 0x10, size 0x1, align 1 | MPropertyDescription
    char _pad_0011[0x3]; // offset 0x11
    float32 engage_priority_hero_mult; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    float32 engage_priority_human_mult; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    float32 engage_last_hit_threshold; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    float32 engage_distance_last_hit_mult; // offset 0x20, size 0x4, align 4 | MPropertyDescription
    float32 engage_distance_hero_mult; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    float32 engage_distance; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    float32 engage_lane_side_dist; // offset 0x2C, size 0x4, align 4 | MPropertyDescription
    float32 engage_player_side_dist; // offset 0x30, size 0x4, align 4 | MPropertyDescription
    float32 safety_distance_behind_ally_creeps; // offset 0x34, size 0x4, align 4 | MPropertyDescription
    float32 safety_distance_away_from_tower_range; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    float32 choose_lane_on_interval; // offset 0x3C, size 0x4, align 4 | MPropertyDescription
    float32 lane_change_duration; // offset 0x40, size 0x4, align 4 | MPropertyDescription
    bool choose_balanced_lanes; // offset 0x44, size 0x1, align 1 | MPropertyDescription
    char _pad_0045[0x3]; // offset 0x45
    float32 attack_miss_chance; // offset 0x48, size 0x4, align 4 | MPropertyDescription
    float32 attack_enemies_inaccuracy; // offset 0x4C, size 0x4, align 4 | MPropertyDescription
    float32 attack_enemies_inaccuracy_scale; // offset 0x50, size 0x4, align 4 | MPropertyDescription
    float32 attack_enemies_inaccuracy_distance; // offset 0x54, size 0x4, align 4 | MPropertyDescription
    float32 attack_enemies_inaccuracy_distance_scale; // offset 0x58, size 0x4, align 4 | MPropertyDescription
    float32 attack_enemies_inaccuracy_threat_scale; // offset 0x5C, size 0x4, align 4 | MPropertyDescription
    float32 reload_pct; // offset 0x60, size 0x4, align 4 | MPropertyDescription
    float32 purchase_random_upgrades; // offset 0x64, size 0x4, align 4 | MPropertyDescription
    float32 purchase_upgrades_in_order; // offset 0x68, size 0x4, align 4 | MPropertyDescription
    float32 use_ability_cooldown; // offset 0x6C, size 0x4, align 4 | MPropertyDescription
    float32 heavy_melee_chance; // offset 0x70, size 0x4, align 4 | MPropertyDescription
    float32 heavy_melee_chance_in_reload; // offset 0x74, size 0x4, align 4 | MPropertyDescription
    float32 parry_chance; // offset 0x78, size 0x4, align 4 | MPropertyDescription
    float32 parry_no_los_penalty; // offset 0x7C, size 0x4, align 4 | MPropertyDescription
    float32 parry_chance_escalation; // offset 0x80, size 0x4, align 4 | MPropertyDescription
    float32 parry_melee_charge_detection_pct; // offset 0x84, size 0x4, align 4 | MPropertyDescription
    float32 max_attacker_memory; // offset 0x88, size 0x4, align 4 | MPropertyDescription
    float32 max_melee_attack_memory; // offset 0x8C, size 0x4, align 4 | MPropertyDescription
    bool jump_sometimes; // offset 0x90, size 0x1, align 1 | MPropertyDescription
    bool roll_after_damage; // offset 0x91, size 0x1, align 1 | MPropertyDescription
    char _pad_0092[0x2]; // offset 0x92
    float32 roll_chance; // offset 0x94, size 0x4, align 4 | MPropertyDescription
    float32 roll_chance_lowhealth_scale; // offset 0x98, size 0x4, align 4 | MPropertyDescription
    float32 roll_frequency; // offset 0x9C, size 0x4, align 4 | MPropertyDescription
    bool fight_midboss; // offset 0xA0, size 0x1, align 1 | MPropertyDescription
    bool fight_for_idol; // offset 0xA1, size 0x1, align 1 | MPropertyDescription
    char _pad_00A2[0x2]; // offset 0xA2
    int32 sensing_tick_interval; // offset 0xA4, size 0x4, align 4 | MPropertyDescription
    float32 visual_reaction_time; // offset 0xA8, size 0x4, align 4 | MPropertyDescription
    float32 shoot_duration; // offset 0xAC, size 0x4, align 4 | MPropertyDescription
    float32 projectile_range_scale; // offset 0xB0, size 0x4, align 4 | MPropertyDescription
    float32 ability_min_cast_range; // offset 0xB4, size 0x4, align 4 | MPropertyDescription
    float32 ability_min_cast_range_friendly; // offset 0xB8, size 0x4, align 4 | MPropertyDescription
    float32 ability_friendly_life_threshold; // offset 0xBC, size 0x4, align 4 | MPropertyDescription
    float32 ability_friendly_pitch; // offset 0xC0, size 0x4, align 4 | MPropertyDescription
    float32 ability_window_size; // offset 0xC4, size 0x4, align 4 | MPropertyDescription
    float32 spend_random_ap; // offset 0xC8, size 0x4, align 4 | MPropertyDescription
    float32 bonus_regen; // offset 0xCC, size 0x4, align 4 | MPropertyDescription
    float32 bonus_regen_outofsight; // offset 0xD0, size 0x4, align 4 | MPropertyDescription
    float32 bonus_run_speed; // offset 0xD4, size 0x4, align 4 | MPropertyDescription
    float32 safe_spot_target_radius; // offset 0xD8, size 0x4, align 4 | MPropertyDescription
    float32 safe_spot_safety_radius; // offset 0xDC, size 0x4, align 4 | MPropertyDescription
    float32 enemy_hero_engage_distance; // offset 0xE0, size 0x4, align 4 | MPropertyDescription
    int32 safe_spot_samples_min; // offset 0xE4, size 0x4, align 4 | MPropertyDescription
    int32 safe_spot_samples_max; // offset 0xE8, size 0x4, align 4 | MPropertyDescription
    int32 attempt_orb_start_time; // offset 0xEC, size 0x4, align 4 | MPropertyDescription
    int32 attempt_deny_orb_pct; // offset 0xF0, size 0x4, align 4 | MPropertyDescription
    int32 attempt_secure_orb_pct; // offset 0xF4, size 0x4, align 4 | MPropertyDescription
    float32 attempt_orb_range; // offset 0xF8, size 0x4, align 4 | MPropertyDescription
    float32 low_health; // offset 0xFC, size 0x4, align 4 | MPropertyDescription
    float32 low_health_pushed; // offset 0x100, size 0x4, align 4 | MPropertyDescription
    bool guide_bot_neutral_info; // offset 0x104, size 0x1, align 1 | MPropertyDescription
    char _pad_0105[0x3]; // offset 0x105
    float32 message_interval; // offset 0x108, size 0x4, align 4 | MPropertyDescription
    int32 los_check_interval; // offset 0x10C, size 0x4, align 4 | MPropertyDescription
};
