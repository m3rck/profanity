/*
 * notifier.h
 *
 * Copyright (C) 2012, 2013 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

void notifier_init(void);
void notifier_uninit(void);

void notify_typing(const char * const handle);
void notify_message(const char * const handle, int win);
void notify_room_message(const char * const handle, const char * const room,
    int win);
void notify_remind(void);
void notify_invite(const char * const from, const char * const room,
    const char * const reason);
void notify_subscription(const char * const from);
