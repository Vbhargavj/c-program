

# # from telegram.ext import *

# # # import keys

# # # # start of online server proxy config

# # # import urllib3
# # # import telepot.api
# # # proxy_url = 'http://proxy.server:3128'

# # # telepot.api._pools = {
# # #     'default': urllib3.ProxyManager(proxy_url=proxy_url, num_pools=3, maxsize=10, retries=False, timeout=30), }

# # # telepot.api._onetime_pool_spec = (urllib3.ProxyManager, dict(proxy_url=proxy_url, num_pools=1, maxsize=1, retries=False, timeout=30))

# # # end of online server proxy config
# # # print('Starting up bot...')


# # # Lets us use the /start command
# # def start_command(update, context):
# #     update.message.reply_text('Hello there! I\'m a bot. What\'s up?')


# # # Lets us use the /help command
# # def help_command(update, context):
# #     update.message.reply_text('Try typing anything and I will do my best to respond!')


# # # Lets us use the /custom command
# # def custom_command(update, context):
# #     update.message.reply_text('This is a custom command, you can add whatever text you want here.')


# # def handle_response(text) -> str:
# #     # Create your own response logic

# #     if 'hello' in text:
# #         return 'Hey there!'
# #     if 'hii' in text :
# #         return 'kam karne madarchod'
# #     # if 'fact1' in text:
# #     #     return 'you are big madarshod'
# #     # if 'fact2' in text:
# #     #     return 'you also bhudhishod'
# #     # if 'fact3' in text:
# #     #     return 'krisha is your.....'
# #     # if 'fact4' in text:
# #     #     return 'abe mc bas mane atlij khabar se'
# #     if 'how are you' in text:
# #         return 'I\'m good!'

# #

# #

# #     if 'father' in text:
# #         return 'my father is bhargav'
# #     return 'I don\'t understand'


# # def handle_message(update, context):
# #     # Get basic info of the incoming messagep
# #     message_type = update.message.chat.type
# #     text = str(update.message.text).lower()
# #     response = ''

# #     # Print a log for debugging
# #     print(f'User ({update.message.chat.id}) says: "{text}" in: {message_type}')

# #     # React to group messages only if users mention the bot directly
# #     if message_type == 'group':
# #         # Replace with your bot username
# #         if '@umangbhjosbot' in text:
# #             new_text = text.replace('@umangbhjosbot', '').strip()
# #             response = handle_response(new_text)
# #     else:
# #         response = handle_response(text)

# #     # Reply normal if the message is in private
# #     update.message.reply_text(response)


# # # Log errors
# # def error(update, context):
# #     print(f'Update {update} caused error {context.error}')


# # # Run the program
# # if __name__ == '__main__':
# #     updater = Updater('5369531550:AAGksMZP3qS7P0Y7moq-SAixfZuzwPTYRLs', use_context=True)
# #     dp = updater.dispatcher

# #     # Commands
# #     dp.add_handler(CommandHandler('start', start_command))
# #     dp.add_handler(CommandHandler('help', help_command))
# #     dp.add_handler(CommandHandler('custom', custom_command))

# #     # Messages
# #     dp.add_handler(MessageHandler(Filters.text, handle_message))

# #     # Log all errors
# #     dp.add_error_handler(error)

# #     # Run the bot
# #     updater.start_polling(0)
# #     updater.idle()
# # from telegram import *
# # from telegram.ext import *

# # updater = Updater('5369531550:AAFekKbGtdylAHeTTj06Zyd5YuMWyHrdH_0',use_context= True)

# # sem1_sem2 = "sem1&sem2"
# # sem3 = "sem3"

# # def start(update: Update,context:CallbackContext):
# #     buttons = [[KeyboardButton("sem1&sem2")],[KeyboardButton("sem3")]]
# #     context.bot.send_message(chat_id=update.effective_chat.id,text="welcom",
# #     reply_markup=ReplyKeyboardMarkup(buttons))
# #     # update.message.reply_text('hey this is trial bot of bhargav')
# #     # update.callback_query.
# # def messageHandler(update: Update, context: CallbackContext):
# #     if sem1_sem2 in update.message.text:
# #         print('sem1_sem2')
# #     if sem3 in update.message.text:
# #         print('sem3')
# # updater.dispatcher.add_handler(CommandHandler('start',start))
# # updater.dispatcher.add_handler(messageHandler(Filters.text,messageHandler))
# # updater.start_polling()


# # this is the main our function
# from telegram import *
# from telegram.ext import *
# from requests import *
# updater = Updater(token="5369531550:AAFekKbGtdylAHeTTj06Zyd5YuMWyHrdH_0")
# dispatcher = updater.dispatcher
# likes = 0
# dislikes = 0
# # chatid= Message.chat_id
# # fchatid=1241390756
# # mid=8530

# allowedUsernames = []

# # this commands is use to
# print("Bot starting.....................\n")
# print(Update._effective_user.name)


# def startCommand(update: Update, context: CallbackContext):
#     buttons = [[KeyboardButton('sem1&sem2')], [KeyboardButton('sem3')]]
#     context.bot.send_message(chat_id=update.effective_chat.id,
#                              text="Welcome to my bot! ", reply_markup=ReplyKeyboardMarkup(buttons))
# # def sem3(update: Update, context: CallbackContext):
#     # # if 'dsa' in update.message.text:
#     # sem3_button = [[KeyboardButton('dsa')],[KeyboardButton('dbms')],[KeyboardButton('p&s')],[KeyboardButton('ETC')],[KeyboardButton('ic')],[KeyboardButton('d.f.')]]
#     # context.bot.send_message(chat_id=update.effective_chat.id, text="Welcome to my bot! ", reply_markup=ReplyKeyboardMarkup(sem3_button))


# def messageHandler(update: Update, context: CallbackContext):
#     # if update.effective_chat.username not in allowedUsernames:
#     #     context.bot.send_message(chat_id=update.effective_chat.id, text="You are not allowed to use this bot")
#     #     return

#     # here these are  commands
#     # if randomPeopleText in update.message.text:
#     #     # update.message.reply_text('this is  bhargav2')
#     #     buttons2 = [[KeyboardButton('bhargav')],[KeyboardButton('bhargav2')]]
#     #     context.bot.send_message(chat_id=update.effective_chat.id, text="Welcome to my bot!", reply_markup=ReplyKeyboardMarkup(buttons2))
#     #     # image = get(randomPeopleUrl).content
#     # if randomImageText in update.message.text:
#     #     update.message.reply_text('this is  bhargav3')
#     # image = get(randomPImageUrl).content
#     # if image:
#     #     context.bot.sendMediaGroup(chat_id=update.effective_chat.id, media=[InputMediaPhoto(image, caption="")])

#     #     buttons = [[InlineKeyboardButton("👍", callback_data="like")], [InlineKeyboardButton("👎", callback_data="dislike")]]
#     #     context.bot.send_message(chat_id=update.effective_chat.id, reply_markup=InlineKeyboardMarkup(buttons), text="Did you like the image?")

#     # sem 3 subjact buttons
#     def sem3(update: Update, context: CallbackContext):
#         update.message.reply_text('bhargavbhai')
#         sem3_button = [[KeyboardButton('D.S.A.')], [KeyboardButton('D.B.M.S.')], [KeyboardButton('p&s')], [
#             KeyboardButton('ETC')], [KeyboardButton('ic')], [KeyboardButton('d.f.')], [KeyboardButton('exit')]]
#         context.bot.send_message(chat_id=update.effective_chat.id,
#                                  text="Welcome to my bot! ", reply_markup=ReplyKeyboardMarkup(sem3_button))

#     if 'exit' in update.message.text:
#         # function call to messege handeler
#         startCommand(update, context)
#     # if 'Exit' in update.message.text:

#     if 'sem3' in update.message.text:
#         # if 'dsa' in update.message.text:
#         sem3(update, context)

#         # //how to create exit button in python telegram bot?

#     if 'sem1&sem2' in update.message.text:
#         sem1_button = [[KeyboardButton('B.M.E.')], [KeyboardButton('MATHS1')], [KeyboardButton('MATHS2')], [KeyboardButton('ENGLISH')], [KeyboardButton('E.G.D')], [
#             KeyboardButton('Environmental Science')], [KeyboardButton('P.P.S.')], [KeyboardButton('B.E.E.')], [KeyboardButton('Physics')], [KeyboardButton('B.E.')], [KeyboardButton('exit')]]
#         context.bot.send_message(chat_id=update.effective_chat.id,
#                                  text="Welcome to my bot! ", reply_markup=ReplyKeyboardMarkup(sem1_button))

#     # SEM3
#     if 'D.S.A.' in update.message.text:
#         # here forward the massage for dsa
#         message = update.message
#         update.message.reply_text('BOOKs')
#         context.bot.send_message(chat_id=1241390756, text=message.text)
#         # update.message.forward_from_message_id(8532)
#         # context.bot.send_message(chat_id=update.message.chat_id,reply_to_message_id=update.message.message_id)
#         # here you can forward the dsa books
#         update.message.reply_text('PYSQs')
#         # here you can forward the dsa pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the dsa notes

#     if 'D.B.M.S.' in update.message.text:
#         # here forward the massage for dbms
#         update.message.reply_text('BOOKs')
#         # here you can forward the dbms books
#         update.message.reply_text('PYSQs')
#         # here you can forward the dbms pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the dbms notes

#     if 'd.f.' in update.message.text:
#         # here forward the massage for d.f.
#         update.message.reply_text('BOOKs')
#         # here you can forward the d.f. books
#         update.message.reply_text('PYSQs')
#         # here you can forward the d.f. pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the d.f. notes

#     if 'p&s' in update.message.text:
#         # here forward the massage for p&s
#         update.message.reply_text('BOOKs')
#         # here you can forward the p&s books
#         update.message.reply_text('PYSQs')
#         # here you can forward the p&s pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the p&s notes

#     if 'ETC' in update.message.text:
#         # here forward the massage for ETC
#         update.message.reply_text('BOOKs')
#         # here you can forward the ETC books
#         update.message.reply_text('PYSQs')
#         # here you can forward the ETC pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the ETC notes

#     if 'ic' in update.message.text:
#         # here forward the massage for ic
#         update.message.reply_text('BOOKs')
#         # here you can forward the ic books
#         update.message.reply_text('PYSQs')
#         # here you can forward the ic pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the ic notes

#     # ==SEM1 AND SEM2==#
#     if 'B.M.E.' in update.message.text:
#         # here forward the massage for B.M.E.
#         update.message.reply_text('BOOKs')
#         # here you can forward the B.M.E. books
#         update.message.reply_text('PYSQs')
#         # here you can forward the B.M.E. pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the B.M.E. notes

#     if 'MATHS1' in update.message.text:
#         # here forward the massage for MATHS1
#         update.message.reply_text('BOOKs')
#         # here you can forward the MATHS1 books
#         update.message.reply_text('PYSQs')
#         # here you can forward the MATHS1 pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the MATHS1 notes

#     if 'MATHS2' in update.message.text:
#         # here forward the massage for MATHS2
#         update.message.reply_text('BOOKs')
#         # here you can forward the MATHS2 books
#         update.message.reply_text('PYSQs')
#         # here you can forward the MATHS2 pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the MATHS2 notes

#     if 'ENGLISH' in update.message.text:
#         # here forward the massage for ENGLISH
#         update.message.reply_text('BOOKs')
#         # here you can forward the ENGLISH books
#         update.message.reply_text('PYSQs')
#         # here you can forward the ENGLISH pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the ENGLISH notes

#     if 'E.D.G.' in update.message.text:
#         # here forward the massage for E.D.G.
#         update.message.reply_text('BOOKs')
#         # here you can forward the E.D.G. books
#         update.message.reply_text('PYSQs')
#         # here you can forward the E.D.G. pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the E.D.G. notes

#     if 'Environmental Science' in update.message.text:
#         # here forward the massage for Environmental Science
#         update.message.reply_text('BOOKs')
#         # here you can forward the Environmental Science books
#         update.message.reply_text('PYSQs')
#         # here you can forward the Environmental Science pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the Environmental Science notes

#     if 'P.P.S.' in update.message.text:
#         # here forward the massage for P.P.S.
#         update.message.reply_text('BOOKs')
#         # here you can forward the P.P.S. books
#         update.message.reply_text('PYSQs')
#         # here you can forward theP.P.S. pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the P.P.S. notes

#     if 'B.E.E.' in update.message.text:
#         # here forward the massage for B.E.E.
#         update.message.reply_text('BOOKs')
#         # here you can forward the B.E.E. books
#         update.message.reply_text('PYSQs')
#         # here you can forward theB.E.E. pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the B.E.E. notes

#     if 'B.E.' in update.message.text:
#         # here forward the massage for B.E.
#         update.message.reply_text('BOOKs')
#         # here you can forward the B.E. books
#         update.message.reply_text('PYSQs')
#         # here you can forward theB.E. pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the B.E. notes

#     if 'Physics' in update.message.text:
#         # here forward the massage for Physics
#         update.message.reply_text('BOOKs')
#         # here you can forward the Physics books
#         update.message.reply_text('PYSQs')
#         # here you can forward thePhysics pysqs
#         update.message.reply_text('NOTEs')
#         # here you can forward the Physics notes


# dispatcher.add_handler(CommandHandler("start", startCommand))
# dispatcher.add_handler(MessageHandler(Filters.text, messageHandler))
# # dispatcher.add_handler(CallbackQueryHandler(queryHandler))
# updater.start_polling()

# # exit button not work solve it
# # now exit button work solve by call previus function button
import datetime

print(datetime.__file__)